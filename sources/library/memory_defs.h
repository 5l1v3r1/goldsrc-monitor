#pragma once

// place for stuff like signatures, bit masks, offsets, etc.
#define OFFSET_TIMESCALE		0x24

#define SIGN_BUILD_NUMBER		"\xA1\x00\x00\x00\x00\x83\xEC\x08\x00\x33\x00\x85\xC0"
#define SIGN_BUILD_NUMBER_NEW	"\x55\x8B\xEC\x83\xEC\x08\xA1\x00\x00\x00\x00\x56\x33\xF6\x85\xC0\x0F\x85\x00\x00\x00\x00\x53\x33\xDB\x8B\x04\x9D"
#define MASK_BUILD_NUMBER		"x????xxx?x?xx"
#define MASK_BUILD_NUMBER_NEW	"xxxxxxx????xxxxxxx????xxxxxx"

#define SIGN_SPR_LOAD			"\x55\x8B\xEC\x56\x8D\x45\x08\x57\x50\xFF\x15\x00\x00\x00\x00\x8B\x45\x08\x83\xC4\x04\x85\xC0\x0F\x84\x00\x00\x00\x00"
#define SIGN_SPR_FRAMES			"\x55\x8B\xEC\x8D\x45\x08\x50\xFF\x15\x00\x00\x00\x00\x8B\x4D\x08\x51\xE8\x00\x00\x00\x00"
#define MASK_SPR_LOAD			"xxxxxxxxxxx????xxxxxxxxxx????"
#define MASK_SPR_FRAMES			"xxxxxxxxx????xxxxx????"

#define SIGN_PRECACHE_MODEL		"\x55\x8B\xEC\x53\x56\x57\x8B\x7D\x08\x33\xDB\x85\xFF\x75\x14\x68\x50\xDF\x97\x03\xE8\xB7\x74\xFE\xFF"
#define SIGN_PRECACHE_SOUND		"\x55\x8B\xEC\x56\x57\x8B\x7D\x08\x85\xFF\x75\x13\x68\x3C\xDC\x97\x03\xE8\x6A\x7C\xFE\xFF"
#define MASK_PRECACHE_MODEL		"xxxxxxxxxxxxxxxx????x????"
#define MASK_PRECACHE_SOUND		"xxxxxxxxxxxxx????x????"