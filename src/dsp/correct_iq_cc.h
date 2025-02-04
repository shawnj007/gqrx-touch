/* -*- c++ -*- */
/*
 * Gqrx SDR: Software defined radio receiver powered by GNU Radio and Qt
 *           https://gqrx.dk/
 *
 * Copyright 2012-2013 Alexandru Csete OZ9AEC.
 *
 * Gqrx is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * Gqrx is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Gqrx; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */
#ifndef CORRECT_IQ_CC_H
#define CORRECT_IQ_CC_H

#include <gnuradio/gr_complex.h>
#include <gnuradio/blocks/complex_to_float.h>
#include <gnuradio/blocks/float_to_complex.h>
#include <gnuradio/hier_block2.h>
#include <gnuradio/filter/single_pole_iir_filter_cc.h>
#include <gnuradio/filter/dc_blocker_cc.h>

#include <gnuradio/blocks/correctiq_auto.h>

#if GNURADIO_VERSION < 0x030800
#include <gnuradio/blocks/sub_cc.h>
#else
#include <gnuradio/blocks/sub.h>
#endif

class dc_corr_cc;
class dc_blocker_cc;
class iq_swap_cc;
class correctiq_auto;

#if GNURADIO_VERSION < 0x030900
typedef boost::shared_ptr<dc_corr_cc> dc_corr_cc_sptr;
typedef boost::shared_ptr<dc_blocker_cc> dc_blocker_cc_sptr;
//typedef boost::shared_ptr<correctiq_auto> correctiq_auto_sptr
typedef boost::shared_ptr<iq_swap_cc> iq_swap_cc_sptr;
#else
typedef std::shared_ptr<dc_corr_cc> dc_corr_cc_sptr;
typedef std::shared_ptr<dc_blocker_cc> dc_blocker_cc_sptr;
typedef std::shared_ptr<correctiq_auto> correctiq_auto_sptr;
typedef std::shared_ptr<iq_swap_cc> iq_swap_cc_sptr;
#endif

/*! \brief Return a shared_ptr to a new instance of dc_corr_cc.
 *  \param sample_rate The sample rate
 *  \param tau The time constant for the filter
 */
dc_corr_cc_sptr make_dc_corr_cc(double sample_rate, double tau=1.0);

/*!
 * Make a DC blocker block.
 *
 * \param D          (int) the length of the delay line
 * \param long_form  (bool) whether to use long (true, default) or short form
 */
dc_blocker_cc_sptr make_dc_blocker_cc(int D, bool long_form);

/*! \brief Single pole IIR filter-based DC offset correction block.
 *  \ingroup DSP
 *
 * This block performs automatic DC offset removal using a single pole IIR
 * filter
 */
class dc_corr_cc : public gr::hier_block2
{
    friend dc_corr_cc_sptr make_dc_corr_cc(double sample_rate, double tau);

protected:
    dc_corr_cc(double sample_rate, double tau);

public:
    ~dc_corr_cc();
    void set_sample_rate(double sample_rate);
    void set_tau(double tau);

private:
    gr::filter::single_pole_iir_filter_cc::sptr d_iir;
    gr::blocks::sub_cc::sptr                    d_sub;

    double d_sr;     /*!< Sample rate. */
    double d_tau;    /*!< Time constant. */
    double d_alpha;  /*!< 1/(1+tau/T). */
};

/*! \brief a computationally efficient controllable DC blocker
 *  \ingroup DSP
 *
 * This block implements a computationally efficient DC blocker that produces a 
 * tighter notch filter around DC for a smaller group delay than an equivalent 
 * FIR filter or using a single pole IIR filter (though the IIR filter is 
 * computationally cheaper).
 */
class dc_blocker_cc : public gr::hier_block2
{
    friend dc_blocker_cc_sptr make_dc_blocker_cc(int D, bool long_form);

protected:
    dc_blocker_cc(int D, bool long_form);

public:
    ~dc_blocker_cc();
    //void set_delay_line(int D);
    //void set_long_form(bool long_form);

private:
    gr::filter::dc_blocker_cc::sptr d_blk;
    gr::blocks::sub_cc::sptr        d_sub;

    int  d_delay;      /*!< Delay Line Length. */
    bool d_long_form;  /*!< Long Form. */
};



/*! \brief Return a shared_ptr to a new instance of iq_swap_cc. */
iq_swap_cc_sptr make_iq_swap_cc(bool enabled);

/*! \brief Block to swap I and Q channels.
 *  \ingroup DSP
 */
class iq_swap_cc : public gr::hier_block2
{
    friend iq_swap_cc_sptr make_iq_swap_cc(bool enabled);

protected:
    iq_swap_cc(bool enabled);

public:
    ~iq_swap_cc();
    void set_enabled(bool enabled);

private:
    gr::blocks::complex_to_float::sptr d_c2f;
    gr::blocks::float_to_complex::sptr d_f2c;
    bool d_enabled;
};

#endif /* CORRECT_IQ_CC_H */
