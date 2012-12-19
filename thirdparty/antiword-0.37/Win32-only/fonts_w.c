/*
 * fonts_u.c
 * Copyright (C) 1999-2001 A.J. van Os; Released under GPL
 * modifed by Vince
 * Description:
 * Functions to deal with fonts (Windows version)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../antiword.h"
#include "../fontinfo.h"

/* Don't use fonts, just plain text */
static BOOL		bUsePlainText = TRUE;
/* Which character set should be used */
static encoding_type	eEncoding = encoding_neutral;


/*
 * pOpenFontTableFile - open the Font translation file
 *
 * Returns the file pointer or NULL
 */
FILE *
pOpenFontTableFile(void)
{
	return NULL;
	/* TBD .. new code , probably based on
		int EnumFontFamiliesEx(
			HDC hdc,                           // handle to device context
			LPLOGFONT lpLogfont,               // pointer to logical font information
			FONTENUMPROC lpEnumFontFamExProc,  // pointer to callback function
			LPARAM lParam,                     // application-supplied data
			DWORD dwFlags                      // reserved; must be zero
			);
 */
} /* end of pOpenFontTableFile */

/*
 * vCloseFont - close the current font, if any
 */
void
vCloseFont(void)
{
} /* end of vCloseFont */

/*
 * tOpenFont - make the given font the current font
 *
 * Returns the font reference number
 */
drawfile_fontref
tOpenFont(UCHAR ucWordFontNumber, USHORT usFontstyle, USHORT usWordFontsize)
{
		/* No outline fonts, no postscript just plain text */
	return (drawfile_fontref)0;
} /* end of tOpenFont */

/*
 * tOpenTableFont - make the table font the current font
 *
 * Returns the font reference number
 */
drawfile_fontref
tOpenTableFont(USHORT usWordFontsize)
{
		/* No outline fonts, no postscript just plain text */
		return (drawfile_fontref)0;
} /* end of tOpenTableFont */

/*
 * szGetFontname - get the fontname
 */
const char *
szGetFontname(drawfile_fontref tFontRef)
{
	return "Dummy font name";
} /* end of szGetFontname */

/*
 * lComputeStringWidth - compute the string width
 *
 * Note: the fontsize is given in half-points!
 *       the stringlength is given in bytes, not characters!
 *
 * Returns the string width in millipoints
 */
long
lComputeStringWidth(const char *szString, size_t tStringLength,
		drawfile_fontref tFontRef, USHORT usFontsize)
{
	return tStringLength * 30; // enough to build only
} /* end of lComputeStringWidth */

/*
 * tGetCharacterLength - the length of the specified character in bytes
 *
 * Returns the length in bytes
 */
size_t
tGetCharacterLength(const char *szString)
{
	fail(szString == NULL);

	if (eEncoding != encoding_utf_8) {
		return 1;
	}
	return (size_t)utf8_chrlength(szString);
} /* end of tGetCharacterLength */

/*
 * tCountColumns - count the number of columns in a string
 *
 * Note: the length is specified in bytes!
 *       A UTF-8 a character can be 0, 1 or 2 columns wide.
 *
 * Returns the number of columns
 */
size_t
tCountColumns(const char *szString, size_t tLength)
{
	fail(szString == NULL);

	if (eEncoding != encoding_utf_8) {
		/* One byte, one character, one column */
		return tLength;
	}
	return (size_t)utf8_strwidth(szString, tLength);
} /* end of tCountColumns */
