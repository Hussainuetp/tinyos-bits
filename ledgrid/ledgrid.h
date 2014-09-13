/*
 * Copyright (c) 2004-2005 The Regents of the University  of California.  
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the University of California nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Copyright (c) 2002-2003 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */

#ifndef ledgrid_H
#define ledgrid_H

typedef nx_struct ledgrid_msg {
  nx_uint16_t letter; 
  nx_uint8_t led;
} ledgrid_msg;

typedef nx_struct ledgrid_serial_msg {
  nx_uint16_t counter;
} ledgrid_serial_msg;


enum {
  ledgrid_COUNT_MSG = 6,
};

uint8_t A[5][4] = {\
	{0,1,2,3}, \
	{4,5,6,7}, \
	{0,1,2,3}, \
	{4,5,6,7}, \
	{7,0,0,7} \
};

uint8_t B[5][4] = {
	{7,7,2,0}, \
	{7,0,0,7}, \
	{7,7,7,0}, \
	{7,0,0,7}, \
	{7,7,7,7} \
};

uint8_t all[4][5][4]={
//A
{\
	{0,7,7,0},\ 
	{7,0,0,7}, \
	{7,7,7,7}, \
	{7,0,0,7}, \
	{7,0,0,7}
},
//B
{	{0,0,0,0}, \
	{0,0,0,0}, \
	{0,0,0,0}, \
	{0,0,0,0}, \
	{0,0,0,0}
},
//C
{\
	{0,7,7,7}, \
	{7,0,0,0}, \
	{7,0,0,0}, \
	{7,0,0,0}, \
	{0,7,7,7} \
},
//D
{\
	{7,7,7,0}, \
	{7,0,0,7}, \
	{7,0,0,7}, \
	{7,0,0,7}, \
	{7,7,7,0} \
}
};

#endif
