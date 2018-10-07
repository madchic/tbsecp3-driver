#include "mn88436_priv.h"

static u8 DMD_REG_ATSC[]={
0		,0x0		,0x50		,
0		,0x1		,0x0		,
0		,0x2		,0xC0		,
0		,0x3		,0x0		,
0		,0x4		,0x0		,
0		,0x5		,0x0		,
0		,0x6		,0x0		,
0		,0x7		,0x0		,
0		,0x8		,0x0		,
0		,0x9		,0x0		,
0		,0xA		,0x1E		,
0		,0xB		,0x35		,
0		,0xC		,0x56		,
0		,0xD		,0x8E		,
0		,0xE		,0xB9		,
0		,0xF		,0x72		,
0		,0x10		,0x0		,
0		,0x11		,0x14		,
0		,0x12		,0xE3		,
0		,0x13		,0x4E		,
0		,0x14		,0x8		,
0		,0x15		,0x5		,
0		,0x16		,0x63		,
0		,0x17		,0x0		,
0		,0x18		,0x0		,
0		,0x19		,0x0		,
0		,0x1A		,0x0		,
0		,0x1B		,0x0		,
0		,0x1C		,0x0		,
0		,0x1D		,0x0		,
0		,0x1E		,0x0		,
0		,0x1F		,0x0		,
0		,0x20		,0x0		,
0		,0x21		,0x50		,
0		,0x22		,0x60		,
0		,0x23		,0x36		,
0		,0x24		,0x2		,
0		,0x25		,0x0		,
0		,0x26		,0x0		,
0		,0x27		,0x0		,
0		,0x28		,0x0		,
0		,0x29		,0x0		,
0		,0x2A		,0x20		,
0		,0x2B		,0xC0		,
0		,0x2C		,0x23		,
0		,0x2D		,0x3F		,
0		,0x2E		,0x3F		,
0		,0x2F		,0x0		,
0		,0x30		,0x2E		,
0		,0x31		,0x0		,
0		,0x32		,0x0		,
0		,0x33		,0x81		,
0		,0x34		,0x0		,
0		,0x35		,0x26		,
0		,0x36		,0x21		,
0		,0x37		,0x88		,
0		,0x38		,0x3		,
0		,0x39		,0x19		,
0		,0x3A		,0x85		,
0		,0x3B		,0x5		,
0		,0x3C		,0xC9		,
0		,0x3D		,0x2		,
0		,0x3E		,0x30		,
0		,0x3F		,0x69		,
0		,0x40		,0x1F		,
0		,0x41		,0xF0		,
0		,0x42		,0x0		,
0		,0x43		,0x96		,
0		,0x44		,0x72		,
0		,0x45		,0x1B		,
0		,0x46		,0x2D		,
0		,0x47		,0x1A		,
0		,0x48		,0x31		,
0		,0x49		,0xFE		,
0		,0x4A		,0x96		,
0		,0x4B		,0x7		,
0		,0x4C		,0x26		,
0		,0x4D		,0xE3		,
0		,0x4E		,0x22		,
0		,0x4F		,0x1B		,
0		,0x50		,0x26		,
0		,0x51		,0x12		,
0		,0x52		,0x40		,
0		,0x53		,0x50		,
0		,0x54		,0x60		,
0		,0x55		,0x40		,
0		,0x56		,0xED		,
0		,0x57		,0x96		,
0		,0x58		,0x4A		,
0		,0x59		,0xDE		,
0		,0x5A		,0x88		,
0		,0x5B		,0xC8		,
0		,0x5C		,0x2D		,
0		,0x5D		,0x1		,
0		,0x5E		,0x0		,
0		,0x5F		,0xB8		,
0		,0x60		,0x40		,
0		,0x61		,0x14		,
0		,0x62		,0x13		,
0		,0x63		,0x30		,
0		,0x64		,0x59		,
0		,0x65		,0x7		,
0		,0x66		,0xF0		,
0		,0x67		,0x47		,
0		,0x68		,0xA1		,
0		,0x69		,0x80		,
0		,0x6A		,0x0		,
0		,0x6B		,0x0		,
0		,0x6C		,0xC0		,
0		,0x6D		,0x0		,
0		,0x6E		,0x0		,
0		,0x6F		,0x0		,
0		,0x70		,0x0		,
0		,0x71		,0x0		,
0		,0x72		,0x0		,
0		,0x73		,0x0		,
0		,0x74		,0x2F		,
0		,0x75		,0x0		,
0		,0x76		,0x0		,
0		,0x77		,0x0		,
0		,0x78		,0x0		,
0		,0x79		,0x40		,
0		,0x7A		,0x20		,
0		,0x7B		,0x40		,
0		,0x7C		,0x80		,
0		,0x7D		,0xFF		,
0		,0x7E		,0x20		,
0		,0x7F		,0x40		,
0		,0x80		,0x10		,
0		,0x81		,0x0		,
0		,0x82		,0xE5		,
0		,0x83		,0xC4		,
0		,0x84		,0xE9		,
0		,0x85		,0x52		,
0		,0x86		,0x5F		,
0		,0x87		,0x53		,
0		,0x88		,0x20		,
0		,0x89		,0x43		,
0		,0x8A		,0x11		,
0		,0x8B		,0x8		,
0		,0x8C		,0x43		,
0		,0x8D		,0x11		,
0		,0x8E		,0x8		,
0		,0x8F		,0x0		,
0		,0x90		,0x60		,
0		,0x91		,0x5B		,
0		,0x92		,0x80		,
0		,0x93		,0xE4		,
0		,0x94		,0x34		,
0		,0x95		,0x0		,
0		,0x96		,0x0		,
0		,0x97		,0x7		,
0		,0x98		,0x0		,
0		,0x99		,0xB0		,
0		,0x9A		,0x68		,
0		,0x9B		,0x50		,
0		,0x9C		,0x84		,
0		,0x9D		,0xA9		,
0		,0x9E		,0x11		,
0		,0x9F		,0x4		,
0		,0xA0		,0x44		,
0		,0xA1		,0x14		,
0		,0xA2		,0x9C		,
0		,0xA3		,0x15		,
0		,0xA4		,0xF6		,
0		,0xA5		,0x36		,
0		,0xA6		,0x16		,
0		,0xA7		,0x3F		,
0		,0xA8		,0x1		,
0		,0xA9		,0x8		,
0		,0xAA		,0x0		,
0		,0xAB		,0x0		,
0		,0xAC		,0x0		,
0		,0xAD		,0x65		,
0		,0xAE		,0x87		,
0		,0xAF		,0x56		,
0		,0xB0		,0x52		,
0		,0xB1		,0x55		,
0		,0xB2		,0x35		,
0		,0xB3		,0x13		,
0		,0xB4		,0x88		,
0		,0xB5		,0x23		,
0		,0xB6		,0x28		,
0		,0xB7		,0x3C		,
0		,0xB8		,0x1		,
0		,0xB9		,0x5B		,
0		,0xBA		,0x0		,
0		,0xBB		,0x0		,
0		,0xBC		,0x0		,
0		,0xBD		,0x0		,
0		,0xBE		,0x0		,
0		,0xBF		,0x0		,
0		,0xC0		,0x0		,
0		,0xC1		,0x0		,
0		,0xC2		,0x0		,
0		,0xC3		,0x0		,
0		,0xC4		,0x0		,
0		,0xC5		,0x0		,
0		,0xC6		,0x0		,
0		,0xC7		,0x0		,
0		,0xC8		,0x0		,
0		,0xC9		,0x0		,
0		,0xCA		,0x0		,
0		,0xCB		,0x0		,
0		,0xCC		,0x0		,
0		,0xCD		,0x0		,
0		,0xCE		,0x0		,
0		,0xCF		,0x0		,
0		,0xD0		,0x0		,
0		,0xD1		,0x0		,
0		,0xD2		,0x0		,
0		,0xD3		,0x0		,
0		,0xD4		,0x0		,
0		,0xD5		,0x0		,
0		,0xD6		,0x0		,
0		,0xD7		,0x0		,
0		,0xD8		,0x0		,
0		,0xD9		,0xA0		,
0		,0xDA		,0x0		,
0		,0xDB		,0x0		,
0		,0xDC		,0x0		,
0		,0xDD		,0x0		,
0		,0xDE		,0x0		,
0		,0xDF		,0x9		,
0		,0xE0		,0x8		,
0		,0xE1		,0x8		,
0		,0xE2		,0xA8		,
0		,0xE3		,0x0		,
0		,0xE4		,0x0		,
0		,0xE5		,0x0		,
0		,0xE6		,0x0		,
0		,0xE7		,0xB4		,
0		,0xE8		,0xA		,
0		,0xE9		,0x0		,
0		,0xEA		,0x0		,
0		,0xEB		,0x0		,
0		,0xEC		,0x0		,
0		,0xED		,0x0		,
0		,0xEE		,0x0		,
0		,0xEF		,0xB4		,
0		,0xF0		,0x91		,
0		,0xF1		,0x0		,
0		,0xF2		,0x0		,
0		,0xF3		,0x0		,
0		,0xF4		,0x0		,
0		,0xF5		,0x0		,
0		,0xF6		,0x0		,
0		,0xF7		,0x0		,
0		,0xF8		,0x0		,
0		,0xF9		,0x0		,
0		,0xFA		,0x0		,
0		,0xFB		,0x80		,
0		,0xFC		,0x10		,
0		,0xFD		,0x2		,
0		,0xFE		,0x20		,
0		,0xFF		,0xAA		,
1		,0x9		,0x0		,
1		,0xA		,0x0		,
1		,0xB		,0x0		,
1		,0xC		,0x8		,
1		,0xD		,0x0		,
1		,0x14		,0x8		,
1		,0x5A		,0x3C		,
1		,0x5B		,0x0		,
1		,0x5C		,0x0		,
1		,0x5D		,0x0		,
1		,0x5E		,0x0		,
1		,0x5F		,0x0		,
1		,0x60		,0x0		,
1		,0x61		,0xAC		,
1		,0x62		,0x24		,
1		,0x63		,0x0		,
1		,0x64		,0x0		,
1		,0x65		,0x0		,
1		,0x66		,0x0		,
1		,0x67		,0x0		,
1		,0x68		,0x0		,
1		,0x69		,0x0		,
1		,0x6A		,0x0		,
1		,0x6B		,0x0		,
1		,0x74		,0x0		,
1		,0x79		,0x0		,
1		,0x80		,0x5		,
1		,0x81		,0x0		,
1		,0x82		,0x40		,
1		,0x83		,0x0		,
1		,0x84		,0x40		,
1		,0x85		,0x37		,
1		,0x86		,0x2		,
1		,0x87		,0x20		,
1		,0x88		,0x0		,
1		,0x89		,0x20		,
1		,0x8A		,0x0		,
1		,0x8B		,0x3		,
1		,0x8C		,0x60		,
1		,0x8D		,0x30		,
1		,0x8E		,0x88		,
1		,0x8F		,0x11		,
1		,0x90		,0x0		,
1		,0x91		,0x0		,
1		,0x92		,0x76		,
1		,0x93		,0xA6		,
1		,0x94		,0x19		,
1		,0x95		,0x52		,
1		,0x96		,0x73		,
1		,0x97		,0x96		,
1		,0x98		,0x9E		,
1		,0x99		,0x69		,
1		,0x9A		,0xFA		,
1		,0x9B		,0x8F		,
1		,0x9C		,0x2E		,
1		,0x9D		,0x8E		,
1		,0x9E		,0x0		,
1		,0x9F		,0x0		,
1		,0xA0		,0xFD		,
1		,0xA1		,0x6D		,
1		,0xA2		,0x63		,
1		,0xA3		,0x52		,
1		,0xFF		,0x55		,
0xff,0xff,0xff};

// Mode : QAM_B_64QAM
static u8 DMD_REG_QAM_64QAM[]={
0		,0x0		,0x51		,
0		,0x1		,0x0		,
0		,0x2		,0xC0		,
0		,0x3		,0x0		,
0		,0x4		,0x0		,
0		,0x5		,0x0		,
0		,0x6		,0x0		,
0		,0x7		,0x0		,
0		,0x8		,0x0		,
0		,0x9		,0x0		,
0		,0xA		,0x16		,
0		,0xB		,0x35		,
0		,0xC		,0x56		,
0		,0xD		,0x97		,
0		,0xE		,0xDE		,
0		,0xF		,0xD8		,
0		,0x10		,0x0		,
0		,0x11		,0x14		,
0		,0x12		,0xE4		,
0		,0x13		,0x74		,
0		,0x14		,0x8		,
0		,0x15		,0x5		,
0		,0x16		,0x63		,
0		,0x17		,0x0		,
0		,0x18		,0x0		,
0		,0x19		,0x0		,
0		,0x1A		,0x0		,
0		,0x1B		,0x0		,
0		,0x1C		,0x0		,
0		,0x1D		,0x0		,
0		,0x1E		,0x0		,
0		,0x1F		,0x0		,
0		,0x20		,0x0		,
0		,0x21		,0x50		,
0		,0x22		,0x60		,
0		,0x23		,0x36		,
0		,0x24		,0x2		,
0		,0x25		,0x0		,
0		,0x26		,0x0		,
0		,0x27		,0x0		,
0		,0x28		,0x0		,
0		,0x29		,0x0		,
0		,0x2A		,0x20		,
0		,0x2B		,0xC0		,
0		,0x2C		,0x23		,
0		,0x2D		,0x3F		,
0		,0x2E		,0x3F		,
0		,0x2F		,0x0		,
0		,0x30		,0x2E		,
0		,0x31		,0x0		,
0		,0x32		,0x0		,
0		,0x33		,0x81		,
0		,0x34		,0x0		,
0		,0x35		,0x26		,
0		,0x36		,0x21		,
0		,0x37		,0x88		,
0		,0x38		,0x3		,
0		,0x39		,0x19		,
0		,0x3A		,0x85		,
0		,0x3B		,0x5		,
0		,0x3C		,0xC9		,
0		,0x3D		,0x2		,
0		,0x3E		,0x30		,
0		,0x3F		,0x69		,
0		,0x40		,0x1F		,
0		,0x41		,0xF0		,
0		,0x42		,0x0		,
0		,0x43		,0x96		,
0		,0x44		,0x72		,
0		,0x45		,0x1B		,
0		,0x46		,0x2D		,
0		,0x47		,0x1A		,
0		,0x48		,0x31		,
0		,0x49		,0xFE		,
0		,0x4A		,0x96		,
0		,0x4B		,0x7		,
0		,0x4C		,0x26		,
0		,0x4D		,0xE3		,
0		,0x4E		,0x22		,
0		,0x4F		,0x1B		,
0		,0x50		,0x26		,
0		,0x51		,0x12		,
0		,0x52		,0x40		,
0		,0x53		,0x50		,
0		,0x54		,0x60		,
0		,0x55		,0x40		,
0		,0x56		,0xED		,
0		,0x57		,0x96		,
0		,0x58		,0x4A		,
0		,0x59		,0xDE		,
0		,0x5A		,0x88		,
0		,0x5B		,0xC8		,
0		,0x5C		,0x2D		,
0		,0x5D		,0x1		,
0		,0x5E		,0x0		,
0		,0x5F		,0xB8		,
0		,0x60		,0x40		,
0		,0x61		,0x14		,
0		,0x62		,0x13		,
0		,0x63		,0x30		,
0		,0x64		,0x59		,
0		,0x65		,0x7		,
0		,0x66		,0xF0		,
0		,0x67		,0x47		,
0		,0x68		,0xA1		,
0		,0x69		,0x80		,
0		,0x6A		,0x0		,
0		,0x6B		,0x0		,
0		,0x6C		,0xC0		,
0		,0x6D		,0x0		,
0		,0x6E		,0x0		,
0		,0x6F		,0x0		,
0		,0x70		,0x0		,
0		,0x71		,0x0		,
0		,0x72		,0x0		,
0		,0x73		,0x0		,
0		,0x74		,0x2F		,
0		,0x75		,0x0		,
0		,0x76		,0x0		,
0		,0x77		,0x0		,
0		,0x78		,0x0		,
0		,0x79		,0x40		,
0		,0x7A		,0x20		,
0		,0x7B		,0x40		,
0		,0x7C		,0x80		,
0		,0x7D		,0xFF		,
0		,0x7E		,0x20		,
0		,0x7F		,0x40		,
0		,0x80		,0x10		,
0		,0x81		,0x0		,
0		,0x82		,0xE5		,
0		,0x83		,0xC4		,
0		,0x84		,0xE9		,
0		,0x85		,0x52		,
0		,0x86		,0x5F		,
0		,0x87		,0x53		,
0		,0x88		,0x20		,
0		,0x89		,0x43		,
0		,0x8A		,0x11		,
0		,0x8B		,0x8		,
0		,0x8C		,0x43		,
0		,0x8D		,0x11		,
0		,0x8E		,0x8		,
0		,0x8F		,0x0		,
0		,0x90		,0x60		,
0		,0x91		,0x5B		,
0		,0x92		,0x80		,
0		,0x93		,0xE4		,
0		,0x94		,0x34		,
0		,0x95		,0x0		,
0		,0x96		,0x0		,
0		,0x97		,0x7		,
0		,0x98		,0x0		,
0		,0x99		,0xB0		,
0		,0x9A		,0x68		,
0		,0x9B		,0x50		,
0		,0x9C		,0x84		,
0		,0x9D		,0xA9		,
0		,0x9E		,0x11		,
0		,0x9F		,0x4		,
0		,0xA0		,0x44		,
0		,0xA1		,0x14		,
0		,0xA2		,0x9C		,
0		,0xA3		,0x15		,
0		,0xA4		,0xF6		,
0		,0xA5		,0x36		,
0		,0xA6		,0x16		,
0		,0xA7		,0x3F		,
0		,0xA8		,0x1		,
0		,0xA9		,0x8		,
0		,0xAA		,0x0		,
0		,0xAB		,0x0		,
0		,0xAC		,0x0		,
0		,0xAD		,0x65		,
0		,0xAE		,0x87		,
0		,0xAF		,0x56		,
0		,0xB0		,0x52		,
0		,0xB1		,0x55		,
0		,0xB2		,0x35		,
0		,0xB3		,0x13		,
0		,0xB4		,0x88		,
0		,0xB5		,0x23		,
0		,0xB6		,0x28		,
0		,0xB7		,0x3C		,
0		,0xB8		,0x1		,
0		,0xB9		,0x5B		,
0		,0xBA		,0x0		,
0		,0xBB		,0x0		,
0		,0xBC		,0x0		,
0		,0xBD		,0x0		,
0		,0xBE		,0x0		,
0		,0xBF		,0x0		,
0		,0xC0		,0x0		,
0		,0xC1		,0x0		,
0		,0xC2		,0x0		,
0		,0xC3		,0x0		,
0		,0xC4		,0x0		,
0		,0xC5		,0x0		,
0		,0xC6		,0x0		,
0		,0xC7		,0x0		,
0		,0xC8		,0x0		,
0		,0xC9		,0x0		,
0		,0xCA		,0x0		,
0		,0xCB		,0x0		,
0		,0xCC		,0x0		,
0		,0xCD		,0x0		,
0		,0xCE		,0x0		,
0		,0xCF		,0x0		,
0		,0xD0		,0x0		,
0		,0xD1		,0x0		,
0		,0xD2		,0x0		,
0		,0xD3		,0x0		,
0		,0xD4		,0x0		,
0		,0xD5		,0x0		,
0		,0xD6		,0x0		,
0		,0xD7		,0x0		,
0		,0xD8		,0x0		,
0		,0xD9		,0xA0		,
0		,0xDA		,0x0		,
0		,0xDB		,0x0		,
0		,0xDC		,0x0		,
0		,0xDD		,0x0		,
0		,0xDE		,0x0		,
0		,0xDF		,0x9		,
0		,0xE0		,0x8		,
0		,0xE1		,0x8		,
0		,0xE2		,0xA8		,
0		,0xE3		,0x0		,
0		,0xE4		,0x0		,
0		,0xE5		,0x0		,
0		,0xE6		,0x0		,
0		,0xE7		,0xB4		,
0		,0xE8		,0xA		,
0		,0xE9		,0x0		,
0		,0xEA		,0x0		,
0		,0xEB		,0x0		,
0		,0xEC		,0x0		,
0		,0xED		,0x0		,
0		,0xEE		,0x0		,
0		,0xEF		,0xB4		,
0		,0xF0		,0x91		,
0		,0xF1		,0x0		,
0		,0xF2		,0x0		,
0		,0xF3		,0x0		,
0		,0xF4		,0x0		,
0		,0xF5		,0x0		,
0		,0xF6		,0x0		,
0		,0xF7		,0x0		,
0		,0xF8		,0x0		,
0		,0xF9		,0x0		,
0		,0xFA		,0x0		,
0		,0xFB		,0x80		,
0		,0xFC		,0x10		,
0		,0xFD		,0x2		,
0		,0xFE		,0x20		,
0		,0xFF		,0xAA		,
1		,0x9		,0x0		,
1		,0xA		,0x0		,
1		,0xB		,0x0		,
1		,0xC		,0x8		,
1		,0xD		,0x0		,
1		,0x14		,0x8		,
1		,0x5A		,0x3C		,
1		,0x5B		,0x0		,
1		,0x5C		,0x0		,
1		,0x5D		,0x0		,
1		,0x5E		,0x0		,
1		,0x5F		,0x0		,
1		,0x60		,0x0		,
1		,0x61		,0xAC		,
1		,0x62		,0x24		,
1		,0x63		,0x0		,
1		,0x64		,0x0		,
1		,0x65		,0x0		,
1		,0x66		,0x0		,
1		,0x67		,0x0		,
1		,0x68		,0x0		,
1		,0x69		,0x0		,
1		,0x6A		,0x0		,
1		,0x6B		,0x0		,
1		,0x74		,0x0		,
1		,0x79		,0x0		,
1		,0x80		,0x5		,
1		,0x81		,0x0		,
1		,0x82		,0x40		,
1		,0x83		,0x0		,
1		,0x84		,0x40		,
1		,0x85		,0x37		,
1		,0x86		,0x2		,
1		,0x87		,0x20		,
1		,0x88		,0x0		,
1		,0x89		,0x20		,
1		,0x8A		,0x0		,
1		,0x8B		,0x3		,
1		,0x8C		,0x60		,
1		,0x8D		,0x30		,
1		,0x8E		,0x88		,
1		,0x8F		,0x11		,
1		,0x90		,0x0		,
1		,0x91		,0x0		,
1		,0x92		,0x71		,
1		,0x93		,0xE7		,
1		,0x94		,0x23		,
1		,0x95		,0x52		,
1		,0x96		,0x73		,
1		,0x97		,0x96		,
1		,0x98		,0xA5		,
1		,0x99		,0x3		,
1		,0x9A		,0xBA		,
1		,0x9B		,0x95		,
1		,0x9C		,0x25		,
1		,0x9D		,0xD4		,
1		,0x9E		,0x0		,
1		,0x9F		,0x0		,
1		,0xA0		,0xFD		,
1		,0xA1		,0x6D		,
1		,0xA2		,0x63		,
1		,0xA3		,0x52		,
1		,0xFF		,0x55		,
0xff,0xff,0xff};


// Mode : QAM_B_256QAM
static u8 DMD_REG_QAM_256QAM[]={
0		,0x0		,0x53		,
0		,0x1		,0x0		,
0		,0x2		,0xC0		,
0		,0x3		,0x0		,
0		,0x4		,0x0		,
0		,0x5		,0x0		,
0		,0x6		,0x0		,
0		,0x7		,0x0		,
0		,0x8		,0x0		,
0		,0x9		,0x0		,
0		,0xA		,0x16		,
0		,0xB		,0x35		,
0		,0xC		,0x56		,
0		,0xD		,0x8F		,
0		,0xE		,0x44		,
0		,0xF		,0xED		,
0		,0x10		,0x0		,
0		,0x11		,0x14		,
0		,0x12		,0xE4		,
0		,0x13		,0x74		,
0		,0x14		,0x8		,
0		,0x15		,0x5		,
0		,0x16		,0x63		,
0		,0x17		,0x0		,
0		,0x18		,0x0		,
0		,0x19		,0x0		,
0		,0x1A		,0x0		,
0		,0x1B		,0x0		,
0		,0x1C		,0x0		,
0		,0x1D		,0x0		,
0		,0x1E		,0x0		,
0		,0x1F		,0x0		,
0		,0x20		,0x0		,
0		,0x21		,0x50		,
0		,0x22		,0x60		,
0		,0x23		,0x36		,
0		,0x24		,0x2		,
0		,0x25		,0x0		,
0		,0x26		,0x0		,
0		,0x27		,0x0		,
0		,0x28		,0x0		,
0		,0x29		,0x0		,
0		,0x2A		,0x20		,
0		,0x2B		,0xC0		,
0		,0x2C		,0x23		,
0		,0x2D		,0x3F		,
0		,0x2E		,0x3F		,
0		,0x2F		,0x0		,
0		,0x30		,0x2E		,
0		,0x31		,0x0		,
0		,0x32		,0x0		,
0		,0x33		,0x81		,
0		,0x34		,0x0		,
0		,0x35		,0x26		,
0		,0x36		,0x21		,
0		,0x37		,0x88		,
0		,0x38		,0x3		,
0		,0x39		,0x19		,
0		,0x3A		,0x85		,
0		,0x3B		,0x5		,
0		,0x3C		,0xC9		,
0		,0x3D		,0x2		,
0		,0x3E		,0x30		,
0		,0x3F		,0x69		,
0		,0x40		,0x1F		,
0		,0x41		,0xF0		,
0		,0x42		,0x0		,
0		,0x43		,0x96		,
0		,0x44		,0x72		,
0		,0x45		,0x1B		,
0		,0x46		,0x2D		,
0		,0x47		,0x1A		,
0		,0x48		,0x31		,
0		,0x49		,0xFE		,
0		,0x4A		,0x96		,
0		,0x4B		,0x7		,
0		,0x4C		,0x26		,
0		,0x4D		,0xE3		,
0		,0x4E		,0x22		,
0		,0x4F		,0x1B		,
0		,0x50		,0x26		,
0		,0x51		,0x12		,
0		,0x52		,0x40		,
0		,0x53		,0x50		,
0		,0x54		,0x60		,
0		,0x55		,0x40		,
0		,0x56		,0xED		,
0		,0x57		,0x96		,
0		,0x58		,0x4A		,
0		,0x59		,0xDE		,
0		,0x5A		,0x88		,
0		,0x5B		,0xC8		,
0		,0x5C		,0x2D		,
0		,0x5D		,0x1		,
0		,0x5E		,0x0		,
0		,0x5F		,0xB8		,
0		,0x60		,0x40		,
0		,0x61		,0x14		,
0		,0x62		,0x13		,
0		,0x63		,0x30		,
0		,0x64		,0x59		,
0		,0x65		,0x7		,
0		,0x66		,0xF0		,
0		,0x67		,0x47		,
0		,0x68		,0xA1		,
0		,0x69		,0x80		,
0		,0x6A		,0x0		,
0		,0x6B		,0x0		,
0		,0x6C		,0xC0		,
0		,0x6D		,0x0		,
0		,0x6E		,0x0		,
0		,0x6F		,0x0		,
0		,0x70		,0x0		,
0		,0x71		,0x0		,
0		,0x72		,0x0		,
0		,0x73		,0x0		,
0		,0x74		,0x2F		,
0		,0x75		,0x0		,
0		,0x76		,0x0		,
0		,0x77		,0x0		,
0		,0x78		,0x0		,
0		,0x79		,0x40		,
0		,0x7A		,0x20		,
0		,0x7B		,0x40		,
0		,0x7C		,0x80		,
0		,0x7D		,0xFF		,
0		,0x7E		,0x20		,
0		,0x7F		,0x40		,
0		,0x80		,0x10		,
0		,0x81		,0x0		,
0		,0x82		,0xE5		,
0		,0x83		,0xC4		,
0		,0x84		,0xE9		,
0		,0x85		,0x52		,
0		,0x86		,0x5F		,
0		,0x87		,0x53		,
0		,0x88		,0x20		,
0		,0x89		,0x43		,
0		,0x8A		,0x11		,
0		,0x8B		,0x8		,
0		,0x8C		,0x43		,
0		,0x8D		,0x11		,
0		,0x8E		,0x8		,
0		,0x8F		,0x0		,
0		,0x90		,0x60		,
0		,0x91		,0x5B		,
0		,0x92		,0x80		,
0		,0x93		,0xE4		,
0		,0x94		,0x34		,
0		,0x95		,0x0		,
0		,0x96		,0x0		,
0		,0x97		,0x7		,
0		,0x98		,0x0		,
0		,0x99		,0xB0		,
0		,0x9A		,0x68		,
0		,0x9B		,0x50		,
0		,0x9C		,0x84		,
0		,0x9D		,0xA9		,
0		,0x9E		,0x11		,
0		,0x9F		,0x4		,
0		,0xA0		,0x44		,
0		,0xA1		,0x14		,
0		,0xA2		,0x9C		,
0		,0xA3		,0x15		,
0		,0xA4		,0xF6		,
0		,0xA5		,0x36		,
0		,0xA6		,0x16		,
0		,0xA7		,0x3F		,
0		,0xA8		,0x1		,
0		,0xA9		,0x8		,
0		,0xAA		,0x0		,
0		,0xAB		,0x0		,
0		,0xAC		,0x0		,
0		,0xAD		,0x65		,
0		,0xAE		,0x87		,
0		,0xAF		,0x56		,
0		,0xB0		,0x52		,
0		,0xB1		,0x55		,
0		,0xB2		,0x35		,
0		,0xB3		,0x13		,
0		,0xB4		,0x88		,
0		,0xB5		,0x23		,
0		,0xB6		,0x28		,
0		,0xB7		,0x3C		,
0		,0xB8		,0x1		,
0		,0xB9		,0x5B		,
0		,0xBA		,0x0		,
0		,0xBB		,0x0		,
0		,0xBC		,0x0		,
0		,0xBD		,0x0		,
0		,0xBE		,0x0		,
0		,0xBF		,0x0		,
0		,0xC0		,0x0		,
0		,0xC1		,0x0		,
0		,0xC2		,0x0		,
0		,0xC3		,0x0		,
0		,0xC4		,0x0		,
0		,0xC5		,0x0		,
0		,0xC6		,0x0		,
0		,0xC7		,0x0		,
0		,0xC8		,0x0		,
0		,0xC9		,0x0		,
0		,0xCA		,0x0		,
0		,0xCB		,0x0		,
0		,0xCC		,0x0		,
0		,0xCD		,0x0		,
0		,0xCE		,0x0		,
0		,0xCF		,0x0		,
0		,0xD0		,0x0		,
0		,0xD1		,0x0		,
0		,0xD2		,0x0		,
0		,0xD3		,0x0		,
0		,0xD4		,0x0		,
0		,0xD5		,0x0		,
0		,0xD6		,0x0		,
0		,0xD7		,0x0		,
0		,0xD8		,0x0		,
0		,0xD9		,0xA0		,
0		,0xDA		,0x0		,
0		,0xDB		,0x0		,
0		,0xDC		,0x0		,
0		,0xDD		,0x0		,
0		,0xDE		,0x0		,
0		,0xDF		,0x9		,
0		,0xE0		,0x8		,
0		,0xE1		,0x8		,
0		,0xE2		,0xA8		,
0		,0xE3		,0x0		,
0		,0xE4		,0x0		,
0		,0xE5		,0x0		,
0		,0xE6		,0x0		,
0		,0xE7		,0xB4		,
0		,0xE8		,0xA		,
0		,0xE9		,0x0		,
0		,0xEA		,0x0		,
0		,0xEB		,0x0		,
0		,0xEC		,0x0		,
0		,0xED		,0x0		,
0		,0xEE		,0x0		,
0		,0xEF		,0xB4		,
0		,0xF0		,0x91		,
0		,0xF1		,0x0		,
0		,0xF2		,0x0		,
0		,0xF3		,0x0		,
0		,0xF4		,0x0		,
0		,0xF5		,0x0		,
0		,0xF6		,0x0		,
0		,0xF7		,0x0		,
0		,0xF8		,0x0		,
0		,0xF9		,0x0		,
0		,0xFA		,0x0		,
0		,0xFB		,0x80		,
0		,0xFC		,0x10		,
0		,0xFD		,0x2		,
0		,0xFE		,0x20		,
0		,0xFF		,0xAA		,
1		,0x9		,0x0		,
1		,0xA		,0x0		,
1		,0xB		,0x0		,
1		,0xC		,0x8		,
1		,0xD		,0x0		,
1		,0x14		,0x8		,
1		,0x5A		,0x3C		,
1		,0x5B		,0x0		,
1		,0x5C		,0x0		,
1		,0x5D		,0x0		,
1		,0x5E		,0x0		,
1		,0x5F		,0x0		,
1		,0x60		,0x0		,
1		,0x61		,0xAC		,
1		,0x62		,0x24		,
1		,0x63		,0x0		,
1		,0x64		,0x0		,
1		,0x65		,0x0		,
1		,0x66		,0x0		,
1		,0x67		,0x0		,
1		,0x68		,0x0		,
1		,0x69		,0x0		,
1		,0x6A		,0x0		,
1		,0x6B		,0x0		,
1		,0x74		,0x0		,
1		,0x79		,0x0		,
1		,0x80		,0x5		,
1		,0x81		,0x0		,
1		,0x82		,0x40		,
1		,0x83		,0x0		,
1		,0x84		,0x40		,
1		,0x85		,0x37		,
1		,0x86		,0x2		,
1		,0x87		,0x20		,
1		,0x88		,0x0		,
1		,0x89		,0x20		,
1		,0x8A		,0x0		,
1		,0x8B		,0x3		,
1		,0x8C		,0x60		,
1		,0x8D		,0x30		,
1		,0x8E		,0x88		,
1		,0x8F		,0x11		,
1		,0x90		,0x0		,
1		,0x91		,0x0		,
1		,0x92		,0x76		,
1		,0x93		,0xA6		,
1		,0x94		,0x19		,
1		,0x95		,0x4F		,
1		,0x96		,0x27		,
1		,0x97		,0x49		,
1		,0x98		,0xA5		,
1		,0x99		,0x3		,
1		,0x9A		,0xBA		,
1		,0x9B		,0x95		,
1		,0x9C		,0x25		,
1		,0x9D		,0xD4		,
1		,0x9E		,0x0		,
1		,0x9F		,0x0		,
1		,0xA0		,0xFD		,
1		,0xA1		,0x6D		,
1		,0xA2		,0x63		,
1		,0xA3		,0x52		,
1		,0xFF		,0x55		,
0xff,0xff,0xff};

static u32 MN88436_REG_AUTOCTRL_SIZE = 673;

static u8  MN88436_REG_AUTOCTRL[] = {
	0x10	,0x00	,0xc0	,0x02	,0xa1	,0x10	,0x25	,0x20
	,0x4b	,0x10	,0x1b	,0x20	,0x51	,0x10	,0x64	,0x20
	,0xf7	,0x10	,0x0a	,0x20	,0xeb	,0x30	,0xc4	,0x70
	,0x60	,0x90	,0x00	,0x78	,0x82	,0x00	,0x1f	,0x10
	,0x0c	,0x20	,0xeb	,0x30	,0xec	,0x70	,0xbf	,0x20
	,0xec	,0x30	,0x5b	,0x70	,0x40	,0x14	,0x30	,0xec
	,0x75	,0x20	,0xec	,0x30	,0xc4	,0x70	,0x02	,0x90
	,0x00	,0x05	,0x0d	,0x82	,0x00	,0x73	,0x82	,0x00
	,0x41	,0x30	,0xc4	,0x70	,0x01	,0xb0	,0x00	,0x1f
	,0xc4	,0x02	,0xa5	,0x68	,0x88	,0x90	,0x00	,0x63
	,0x80	,0x00	,0x53	,0x10	,0x88	,0xc0	,0x02	,0xa5
	,0x20	,0x5b	,0x30	,0xec	,0x70	,0xbf	,0x20	,0xec
	,0x80	,0x00	,0x1f	,0x10	,0xc8	,0xc0	,0x02	,0xa5
	,0x20	,0x5b	,0x30	,0xec	,0x74	,0x40	,0x20	,0xec
	,0x80	,0x00	,0x1f	,0x08	,0xb0	,0x00	,0x73	,0x01
	,0x10	,0x58	,0x20	,0xb9	,0x30	,0xed	,0x70	,0xfc
	,0x20	,0xed	,0x82	,0x01	,0x54	,0x10	,0x07	,0x20
	,0x4b	,0x10	,0x12	,0x20	,0x51	,0x10	,0x5b	,0x20
	,0xb9	,0x10	,0x01	,0x20	,0xeb	,0x10	,0x00	,0xc0
	,0x02	,0xa0	,0x20	,0x5e	,0x10	,0x94	,0x20	,0x5d
	,0x10	,0x00	,0xc0	,0x02	,0xa4	,0x82	,0x02	,0x3c
	,0x0c	,0x82	,0x02	,0x2c	,0x09	,0x82	,0x01	,0x77
	,0xc4	,0x02	,0xa4	,0x40	,0xc0	,0x02	,0xa4	,0x14
	,0x10	,0x3c	,0x69	,0xb0	,0x00	,0xa5	,0x82	,0x01
	,0x2a	,0x10	,0x02	,0x20	,0xeb	,0xc4	,0x02	,0xa0
	,0x68	,0x0f	,0xc0	,0x02	,0xa0	,0x20	,0x5e	,0x10
	,0x94	,0x20	,0x5d	,0x10	,0x00	,0xc0	,0x02	,0xa4
	,0x82	,0x02	,0x3c	,0x0c	,0x82	,0x02	,0x2c	,0x09
	,0x82	,0x01	,0x77	,0xc4	,0x02	,0xa4	,0x40	,0xc0
	,0x02	,0xa4	,0x14	,0x10	,0x3c	,0x69	,0xb0	,0x00
	,0xd8	,0x82	,0x01	,0x2a	,0x10	,0x04	,0x20	,0xeb
	,0xc4	,0x02	,0xa0	,0x60	,0x1e	,0xc0	,0x02	,0xa0
	,0x20	,0x5e	,0x10	,0x94	,0x20	,0x5d	,0x10	,0x00
	,0xc0	,0x02	,0xa4	,0x82	,0x02	,0x3c	,0x0c	,0x82
	,0x02	,0x2c	,0x09	,0x82	,0x01	,0x77	,0xc4	,0x02
	,0xa4	,0x40	,0xc0	,0x02	,0xa4	,0x14	,0x10	,0x3c
	,0x69	,0xb0	,0x01	,0x0b	,0x82	,0x01	,0x2a	,0x80
	,0x00	,0x91	,0x30	,0xea	,0xc0	,0x02	,0xa2	,0x10
	,0x04	,0x20	,0xba	,0x10	,0x47	,0x20	,0x60	,0x10
	,0x05	,0x20	,0xba	,0x30	,0xbd	,0x70	,0x20	,0xc0
	,0x02	,0xa3	,0x30	,0xea	,0xc5	,0x02	,0xa2	,0x69
	,0xb0	,0x01	,0x2a	,0xc4	,0x02	,0xa3	,0x60	,0x00
	,0xb0	,0x01	,0xed	,0x01	,0x10	,0x05	,0x20	,0xeb
	,0x10	,0x10	,0x20	,0xac	,0x10	,0xf4	,0x20	,0xe7
	,0x10	,0x04	,0x20	,0xaa	,0x10	,0x0	,0xc0	,0x02
	,0xa0	,0x20	,0x5e	,0x10	,0x94	,0x20	,0x5d	,0x30
	,0xc4	,0x70	,0x01	,0x90	,0x00	,0x05	,0x01	,0x82
	,0x01	,0x7f	,0x08	,0xb0	,0x01	,0x77	,0x01	,0x30
	,0xea	,0xc0	,0x02	,0xa2	,0x10	,0x5b	,0x20	,0xb9
	,0x10	,0x04	,0x20	,0xba	,0x10	,0x47	,0x20	,0x60
	,0x10	,0x05	,0x20	,0xba	,0x30	,0xbd	,0x70	,0x20
	,0xc0	,0x02	,0xa3	,0x30	,0xea	,0xc5	,0x02	,0xa2
	,0x69	,0xb0	,0x01	,0x7f	,0xc4	,0x02	,0xa3	,0x60
	,0x00	,0x90	,0x01	,0xaf	,0xb0	,0x01	,0xce	,0x10
	,0x10	,0x20	,0xac	,0x10	,0xf4	,0x20	,0xe7	,0x10
	,0x04	,0x20	,0xaa	,0x30	,0xc6	,0xc0	,0x02	,0xa1
	,0x70	,0x04	,0x90	,0x00	,0x05	,0x30	,0xed	,0x70
	,0xfb	,0x74	,0x00	,0x20	,0xed	,0x01	,0x10	,0x10
	,0x20	,0xac	,0x10	,0x90	,0x20	,0xe7	,0x10	,0x04
	,0x20	,0xaa	,0x30	,0xc6	,0xc0	,0x02	,0xa1	,0x70
	,0x04	,0x90	,0x00	,0x05	,0x30	,0xed	,0x70	,0xfb
	,0x74	,0x04	,0x20	,0xed	,0x01	,0x30	,0x5e	,0x70
	,0xff	,0x92	,0x02	,0x11	,0x30	,0x5e	,0x70	,0x80
	,0xb2	,0x02	,0x1a	,0x30	,0x5e	,0x68	,0x0f	,0x92
	,0x02	,0x23	,0x30	,0xeb	,0x74	,0xf0	,0x20	,0xeb
	,0x82	,0x01	,0x7f	,0x82	,0x02	,0x3c	,0x80	,0x02
	,0x02	,0x30	,0xed	,0x70	,0xfc	,0x74	,0x01	,0x20
	,0xed	,0x01	,0x30	,0xed	,0x70	,0xfc	,0x74	,0x02
	,0x20	,0xed	,0x01	,0x30	,0xed	,0x70	,0xfc	,0x74
	,0x03	,0x20	,0xed	,0x01	,0x30	,0xc6	,0xc0	,0x02
	,0xa1	,0x70	,0x04	,0x90	,0x00	,0x05	,0x08	,0xb0
	,0x02	,0x2c	,0x09	,0x01	,0x30	,0xeb	,0x74	,0x10
	,0x20	,0xeb	,0x30	,0xd8	,0x14	,0x70	,0x07	,0x90
	,0x02	,0x51	,0x11	,0x68	,0x05	,0x90	,0x02	,0x51
	,0x01	,0x30	,0xcf	,0xc0	,0x02	,0xa6	,0xc4	,0x02
	,0xa6	,0x70	,0xf8	,0x90	,0x02	,0x61	,0xb0	,0x02
	,0x7e	,0xc4	,0x02	,0xa6	,0x4c	,0x4c	,0x4c	,0x4c
	,0x4c	,0xc0	,0x02	,0xa6	,0x30	,0xd0	,0x48	,0x48
	,0x48	,0x14	,0xc4	,0x02	,0xa6	,0x61	,0xc0	,0x02
	,0xa6	,0x20	,0xee	,0x80	,0x02	,0x88	,0x10	,0xff
	,0xc0	,0x02	,0xa6	,0x20	,0xee	,0x80	,0x02	,0x88
	,0xc4	,0x02	,0xa6	,0x14	,0x30	,0xef	,0x69	,0x88
	,0x02	,0x93	,0x01	,0x30	,0xa3	,0x70	,0x07	,0x74
	,0x28	,0x20	,0xa3	,0x70	,0x07	,0x20	,0xa3	,0x01
	,0x72};

static const struct dvb_frontend_ops mn88436_ops;

static int  log10_easy( u32  cnr )
{
	u32	c;
	s32	ret;
	s32	logtbl[] = {
	0	,-1000,-699	,-523,-398,
	-301,-222 ,-155	,-97 ,-46 ,
	0	,41	,79	,114	,146	,
	176	,204	,230	,255	,
	279	,301	,322	,342	,
	362	,380	,398	,415	,
	431	,447	,462	,477	,
	491	,505	,519	,531	,
	544	,556	,568	,580	,
	591	,602	,613	,623	,
	633	,643	,653	,663	,
	672	,681	,690	,699	,
	708	,716	,724	,732	,
	740	,748	,756	,763	,
	771	,778	,785	,792	,
	799	,806	,813	,820	,
	826	,833	,839	,845	,
	851	,857	,863	,869	,
	875	,881	,886	,892	,
	898	,903	,908	,914	,
	919	,924	,929	,934	,
	940	,944	,949	,954	,
	959	,964	,968	,973	,
	978	,982	,987	,991	,
	996	,1000};
	c = 0;

	while( cnr > 100 ){
		cnr = cnr / 10;
		c++;
	}
	ret = logtbl[cnr] + c*1000 + 1000;

	return ret;
}

static int DMD_send_registers(struct i2c_client *client,u8*regset)
{
	struct mn88436_dev*dev = i2c_get_clientdata(client);
	int ret;
	u32 i;
	for(i=0;;)
	{
		if(regset[i]==0xff)break;
		ret=regmap_write(dev->regmap[regset[i]],regset[i+1],regset[i+2]);
		i=i+3;
	}
	return ret;
}

static int mn88436_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
{
 	struct i2c_client *client = fe->demodulator_priv;
	struct mn88436_dev *dev = i2c_get_clientdata(client);
	u32	ifagc = 0;
	int IF1,IF2;

	regmap_read(dev->regmap[1], DMD_USR_IFAGCMON1 , &IF1 );
	regmap_read(dev->regmap[1], DMD_USR_IFAGCMON2 , &IF2 );
	
	ifagc = IF1 * 256 + IF2;
	if ( ifagc < AGC_MIN )
	{
	   *strength = 0;
	}
	else if ( ifagc > AGC_MAX ) 
	{
	   *strength = 100;
	}
	else
	{
	    *strength = (ifagc-AGC_MIN)*100/AGC_RANGE;
	}
	
	
	return 0;
}

static int mn88436_read_status(struct dvb_frontend *fe,enum fe_status *status)
{
	struct i2c_client *client = fe->demodulator_priv;
	struct mn88436_dev *dev = i2c_get_clientdata(client);

	int ret;
	int utemp;
	int i =0;
	for(i=0;i<50;i++)
	{
	ret = regmap_read(dev->regmap[0],DMD_MAIN_STSMON1,&utemp);
	if(utemp&0x1){
		*status = FE_HAS_VITERBI | FE_HAS_SYNC | FE_HAS_LOCK;
		break;
		}
	else
		*status = FE_HAS_SIGNAL | FE_HAS_CARRIER;

		msleep(1);
	}
	
	return ret; 
	
}
static int mn88436_init(struct dvb_frontend *fe)
{
	struct i2c_client *client = fe->demodulator_priv;
	struct mn88436_dev *dev = i2c_get_clientdata(client);
	int ret;
	int utemp;
	u32 i;
	/*Demod LSI init*/
	ret = DMD_send_registers(client,DMD_REG_ATSC);
	if(ret)
		goto err;
	ret = regmap_write(dev->regmap[0],DMD_MAIN_PSEQSET,0x03);
	if(ret)
		goto err;
	for(i=0;i<MN88436_REG_AUTOCTRL_SIZE;i++)
		ret = regmap_write(dev->regmap[0],DMD_MAIN_PSEQPRG,MN88436_REG_AUTOCTRL[i]);


	ret |= regmap_read(dev->regmap[0],DMD_MAIN_PSEQSET,&utemp);
	if(utemp&0x20)
	{
		printk("ERROR : PSEQ Parity \n");
	}
	else
		ret |= regmap_write(dev->regmap[0],DMD_MAIN_PSEQSET,0x00); 
	
	if(ret)
		goto err;

	ret = regmap_read(dev->regmap[0],DMD_MAIN_TCBSET,&utemp);
	utemp |=0x7f &0x53;
	utemp &=(0x7f^0xff)|0x53;
	ret = regmap_write(dev->regmap[0],DMD_MAIN_TCBSET,utemp);
		
	ret = regmap_write(dev->regmap[0],DMD_MAIN_TCBADR,0x00);
	if(ret)
		goto err;
	

	/*set TS mode*/
	utemp = dev->ts_mode ?0xc0 :0xc1;
	ret = regmap_write(dev->regmap[0],DMD_MAIN_CPOSET2,utemp);

	utemp = dev->ts_mode ?0xc0 :0xff;
	ret |= regmap_write(dev->regmap[0],DMD_MAIN_GPSET1,utemp);

	if(!dev->ts_mode)
		ret |= regmap_write(dev->regmap[0],DMD_MAIN_CPOSET1,0x01);

	if(ret)
		goto err;

	dev_dbg(&client->dev,"mn88436 init successfully.");
	
	return ret;
err:
	dev_err(&client->dev,"failed =%d",ret);
	return ret;

}
static int mn88436_set_frontend(struct dvb_frontend *fe)
{
	struct i2c_client *client = fe->demodulator_priv;
	struct mn88436_dev *dev = i2c_get_clientdata(client);
	struct dtv_frontend_properties *c = &fe->dtv_property_cache;
	int ret;
	int utemp;
	u32 tuner_status;
	
	dev_dbg(&client->dev,"delivery_system=%u modulation=%u ,frequency=%d \n",c->delivery_system,
		c->modulation,c->frequency);
	switch(c->modulation){
	  default:
	  case VSB_8:
	  	ret = DMD_send_registers(client,DMD_REG_ATSC);
		dev->mode = DMD_E_ATSC;
	  	break;
	  case QAM_64:
	  	ret = DMD_send_registers(client,DMD_REG_QAM_64QAM);
		dev->mode = DMD_E_QAMB_64QAM;
	  	break;
	  case QAM_256:
	  	ret = DMD_send_registers(client,DMD_REG_QAM_256QAM);
		dev->mode = DMD_E_QAMB_256QAM;
	   	break;
	 }
	/*set TS again*/
	utemp = dev->ts_mode ?0xc0 :0xc1;
	ret = regmap_write(dev->regmap[0],DMD_MAIN_CPOSET2,utemp);

	utemp = dev->ts_mode ?0xc0 :0xff;
	ret |= regmap_write(dev->regmap[0],DMD_MAIN_GPSET1,utemp);

	if(!dev->ts_mode)
		ret |= regmap_write(dev->regmap[0],DMD_MAIN_CPOSET1,0x01);

	ret |= regmap_write(dev->regmap[0],DMD_MAIN_VEQSET2,0xe0);
	if(ret)
		goto err;
		
	/*set tuner*/
	if(fe->ops.tuner_ops.set_params){
		ret = fe->ops.tuner_ops.set_params(fe);
		if(ret)
			goto err;
	}
	if(fe->ops.tuner_ops.get_status){
		ret = fe->ops.tuner_ops.get_status(fe,&tuner_status);
	}
	msleep(5);
	
	ret = regmap_write(dev->regmap[0],DMD_MAIN_RSTSET1,0x77);
	if(ret)
		goto err;

	return ret;
err:
	dev_err(&client->dev,"failed = %d" ,ret);
	return ret;
}
static int mn88436_read_snr(struct dvb_frontend* fe, u16* snr)
{
	struct i2c_client *client = fe->demodulator_priv;
	struct mn88436_dev *dev = i2c_get_clientdata(client);
	int	rd;
	u32	cni,cnd;
	u32	x,y;

	regmap_read(dev->regmap[1], DMD_USR_CNMON1 , &rd );
	x = 0x100 * rd;
	regmap_read(dev->regmap[1], DMD_USR_CNMON2 , &rd );
	x += rd;
	regmap_read(dev->regmap[1], DMD_USR_CNMON3 , &rd );
	y = 0x100 * rd;
	regmap_read(dev->regmap[1], DMD_USR_CNMON4 , &rd );
	y += rd;
	if( dev->mode == DMD_E_ATSC )
	{
		//after EQ
		*snr = 4634 - log10_easy( y );
		
	}
	else
	{
		if( y != 0	)
			*snr = log10_easy( (8*x) / y );
		else
			*snr = 0;
	
	}

	return 0;
}

static const struct dvb_frontend_ops mn88436_ops = {
	.delsys = {SYS_ATSC,SYS_DVBC_ANNEX_B},
	.info = {
		.name = "MN88436 ATSC/QAMB frontend",
#ifdef MHz
		.frequency_min_hz	= 44 * MHz,
		.frequency_max_hz	= 1002 * MHz,
		.frequency_stepsize_hz	= 62500,
#else
		.frequency_min		= 44000000,
		.frequency_max		= 1002000000,
		.frequency_stepsize	= 62500,
#endif
		.caps = FE_CAN_QAM_64 | FE_CAN_QAM_256 | FE_CAN_8VSB

	},
	.init = mn88436_init,
	.set_frontend = mn88436_set_frontend,
	.read_status = mn88436_read_status,
	.read_signal_strength = mn88436_read_signal_strength,
	.read_snr 		= mn88436_read_snr,
};
static int mn88436_probe(struct i2c_client *client ,
			const struct i2c_device_id *id)
{
	struct mn88436_config *cfg = client->dev.platform_data;
	struct mn88436_dev *dev;
	int ret;
	int utmp;
	static const struct regmap_config regmap_config = {
		.reg_bits = 8,
		.val_bits = 8,
	};
	dev = kzalloc(sizeof(*dev),GFP_KERNEL);
	if(!dev){
		ret = -ENOMEM;
		goto err;
		}

	dev->i2c_write_max = cfg->i2c_wr_max ?cfg->i2c_wr_max : ~0;
	dev->ts_mode = cfg->ts_mode;
	dev->mode = DMD_E_ATSC;
	dev->client[0] = client;
	dev->regmap[0] = regmap_init_i2c(dev->client[0],&regmap_config);
	if(IS_ERR(dev->regmap[0])){
		ret = PTR_ERR(dev->regmap[0]);
		goto err_kfree;
	}
	/*check demod i2c*/
	ret = regmap_read(dev->regmap[0],0xff,&utmp);
	if(ret)
		goto err_regmap_0_regmap_exit;

	ret = regmap_write(dev->regmap[0],0xff,0x99);
	if(ret)
		goto err_regmap_0_regmap_exit;

	ret = regmap_read(dev->regmap[0],0xff,&utmp);
	if(utmp!=0x99)
		goto err_regmap_0_regmap_exit;

	/*chip has two IIC address for different register bank, 0x18 and 0x10,so we need register a dummy clients */
	dev->client[1] = i2c_new_dummy(client->adapter,0x10);
	if(!dev->client[1]){
		ret = -ENODEV;
		dev_err(&client->dev,"I2C registeration failed\n");
		if(ret)
			goto err_regmap_0_regmap_exit;
	}


	dev->regmap[1] = regmap_init_i2c(dev->client[1],&regmap_config);
	if(IS_ERR(dev->regmap[1])){
		ret = PTR_ERR(dev->regmap[1]);
		goto err_client_1_i2c_unregister_device;
	}
	i2c_set_clientdata(dev->client[1],dev);

	/*test the dummy i2c*/
	ret = regmap_write(dev->regmap[1],0xff,0x88);
	if(ret)
		goto err_regmap_1_regmap_exit;
	ret = regmap_read(dev->regmap[1],0xff,&utmp);
	if(ret)
		goto err_regmap_1_regmap_exit;
	if(utmp!=0x88)
		goto err_regmap_1_regmap_exit;

	/*Create dvb frontend*/

	memcpy(&dev->fe.ops,&mn88436_ops,sizeof(struct dvb_frontend_ops));
	dev->fe.demodulator_priv = client;
	*cfg->fe = &dev->fe;
	i2c_set_clientdata(client,dev);

	dev_info(&client->dev, "Panasonic MN88436 successfully identified\n");	

	return 0;
	
err_regmap_1_regmap_exit:
		regmap_exit(dev->regmap[1]);
err_client_1_i2c_unregister_device :
		i2c_unregister_device(dev->client[1]);
err_regmap_0_regmap_exit:
		regmap_exit(dev->regmap[0]);

err_kfree:
		kfree(dev);
err :
	dev_err(&client->dev,"__failed = %d___\n",ret);
	return ret;
}
static int mn88436_remove(struct i2c_client *client)
{
	struct mn88436_dev *dev = i2c_get_clientdata(client);
	
	regmap_exit(dev->regmap[1]);
	i2c_unregister_device(dev->client[1]);

	regmap_exit(dev->regmap[0]);

	kfree(dev);
	
	return 0;

}
static const struct i2c_device_id mn88436_id_table[] = {
		{"mn88436",0},
			{}

};

MODULE_DEVICE_TABLE(i2c,mn88436_id_table);

static struct i2c_driver mn88436_driver = {
	.driver ={
		.name = "mn88436",
		},
		.probe	  = mn88436_probe,
		.remove   = mn88436_remove,
		.id_table = mn88436_id_table,

};

module_i2c_driver(mn88436_driver);

MODULE_AUTHOR("Davin <smiledavin@gmail.com>");
MODULE_DESCRIPTION("Panasonic MN88436 ATSC/QAMB demodulator driver");
MODULE_LICENSE("GPL");

