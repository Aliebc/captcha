/*
    https://github.com/Aliebc/captcha
    Aliebc forked and modified this library at Nov 16, 2022

    Aliebc made this library support Windows and C++11 by changing random function 
    to standard C library function.

    Source code's author is Ivan Tikhonov, kefeer@brokestream.com.

    This copy's author is Aliebc, aliebcx@outlook.com
*/
/*
  http://brokestream.com/captcha.html

  Copyright (C) 2009 Ivan Tikhonov

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.

  Ivan Tikhonov, kefeer@brokestream.com
*/

#ifndef CAPTCHA_H
#define CAPTCHA_H

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define GIFSIZE gifsize

const int gifsize=17646;
void captcha(unsigned char im[70*200], unsigned char l[6]);
void makegif(unsigned char im[70*200], unsigned char gif[gifsize]);

#endif