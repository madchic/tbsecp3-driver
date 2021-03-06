/* 
* This file is part of STiD135 OXFORD LLA 
* 
* Copyright (c) <2014>-<2018>, STMicroelectronics - All Rights Reserved 
* Author(s): Mathias Hilaire (mathias.hilaire@st.com), Thierry Delahaye (thierry.delahaye@st.com) for STMicroelectronics. 
* 
* License terms: BSD 3-clause "New" or "Revised" License. 
* 
* Redistribution and use in source and binary forms, with or without 
* modification, are permitted provided that the following conditions are met: 
* 
* 1. Redistributions of source code must retain the above copyright notice, this 
* list of conditions and the following disclaimer. 
* 
* 2. Redistributions in binary form must reproduce the above copyright notice, 
* this list of conditions and the following disclaimer in the documentation 
* and/or other materials provided with the distribution. 
* 
* 3. Neither the name of the copyright holder nor the names of its contributors 
* may be used to endorse or promote products derived from this software 
* without specific prior written permission. 
* 
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE 
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL 
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR 
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, 
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
* 
*/ 
#ifndef _C8SECTP_FE_TAG_COUNTER_REG_INIT_H
#define _C8SECTP_FE_TAG_COUNTER_REG_INIT_H

/* -------------------------------------------------------------------------
 * File name  : c8sectp_fe_tag_counter_reg_init.h
 * File type  : C header file
 * -------------------------------------------------------------------------
 * Description:  Register map constants
 * Generated by spirit2regtest v2.24_alpha3
 * -------------------------------------------------------------------------
 */


/* Register map constants */

/* C8SECTPFE_TC_COUNTER_LSW */
#define RSTID135_C8SECTPFE_TC_C8SECTPFE_TC_COUNTER_LSW               0x00000000
#define RSTID135_C8SECTPFE_TC_C8SECTPFE_TC_COUNTER_LSW__DEFAULT      0x0       
#define FSTID135_C8SECTPFE_TC_C8SECTPFE_TC_COUNTER_LSW_VALUE__MASK   0xFFFFFFFF

/* C8SECTPFE_TC_COUNTER_MSW */
#define RSTID135_C8SECTPFE_TC_C8SECTPFE_TC_COUNTER_MSW               0x00000004
#define RSTID135_C8SECTPFE_TC_C8SECTPFE_TC_COUNTER_MSW__DEFAULT      0x0       
#define FSTID135_C8SECTPFE_TC_C8SECTPFE_TC_COUNTER_MSW_VALUE__MASK   0x000003FF


/* Number of registers */
#define STID135_C8SECTP_FE_TAG_COUNTER_REG_NBREGS                    2         

/* Number of fields */
#define STID135_C8SECTP_FE_TAG_COUNTER_REG_NBFIELDS                  2         



#endif /* #ifndef _C8SECTP_FE_TAG_COUNTER_REG_INIT_H */
