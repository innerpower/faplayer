/*****************************************************************************
 * dr_06.h
 * Copyright (C)2001-2010 VideoLAN
 * $Id: dr_06.h,v 1.2 2002/05/10 23:50:36 bozo Exp $
 *
 * Authors: Arnaud de Bossoreille de Ribou <bozo@via.ecp.fr>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *****************************************************************************/

/*!
 * \file <dr_06.h>
 * \author Arnaud de Bossoreille de Ribou <bozo@via.ecp.fr>
 * \brief Application interface for the MPEG 2 "data stream alignment"
 * descriptor decoder and generator.
 *
 * Application interface for the MPEG 2 "data stream alignment" descriptor
 * decoder and generator. This descriptor's definition can be found in
 * ISO/IEC 13818-1 section 2.6.10.
 */

#ifndef _DVBPSI_DR_06_H_
#define _DVBPSI_DR_06_H_

#ifdef __cplusplus
extern "C" {
#endif


/*****************************************************************************
 * dvbpsi_ds_alignment_dr_t
 *****************************************************************************/
/*!
 * \struct dvbpsi_ds_alignment_dr_s
 * \brief "data stream alignment" descriptor structure.
 *
 * This structure is used to store a decoded "data stream alignment"
 * descriptor. (ISO/IEC 13818-1 section 2.6.10).
 */
/*!
 * \typedef struct dvbpsi_ds_alignment_dr_s dvbpsi_ds_alignment_dr_t
 * \brief dvbpsi_ds_alignment_dr_t type definition.
 */
typedef struct dvbpsi_ds_alignment_dr_s
{
  uint8_t       i_alignment_type;       /*!< alignment_type */

} dvbpsi_ds_alignment_dr_t;


/*****************************************************************************
 * dvbpsi_DecodeDSAlignmentDr
 *****************************************************************************/
/*!
 * \fn dvbpsi_ds_alignment_dr_t * dvbpsi_DecodeDSAlignmentDr(
                                        dvbpsi_descriptor_t * p_descriptor)
 * \brief "data stream alignment" descriptor decoder.
 * \param p_descriptor pointer to the descriptor structure
 * \return a pointer to a new "data stream alignment" descriptor structure
 * which contains the decoded data.
 */
dvbpsi_ds_alignment_dr_t* dvbpsi_DecodeDSAlignmentDr(
                                        dvbpsi_descriptor_t * p_descriptor);


/*****************************************************************************
 * dvbpsi_GenDSAlignmentDr
 *****************************************************************************/
/*!
 * \fn dvbpsi_descriptor_t * dvbpsi_GenDSAlignmentDr(
                        dvbpsi_ds_alignment_dr_t * p_decoded, int b_duplicate)
 * \brief "data stream alignment" descriptor generator.
 * \param p_decoded pointer to a decoded "data stream alignment" descriptor
 * structure
 * \param b_duplicate if non zero then duplicate the p_decoded structure into
 * the descriptor
 * \return a pointer to a new descriptor structure which contains encoded data.
 */
dvbpsi_descriptor_t * dvbpsi_GenDSAlignmentDr(
                                        dvbpsi_ds_alignment_dr_t * p_decoded,
                                        int b_duplicate);


#ifdef __cplusplus
};
#endif

#else
#error "Multiple inclusions of dr_06.h"
#endif

