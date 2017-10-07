/*
   Copyright 2014, 2015, 2016, 2017 Clerk Ma

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
   02110-1301 USA.
*/

#include <stdio.h>

extern int  aptex_program(void);
extern void aptex_set_env(int argc, char ** argv);
extern void aptex_init(void);
extern void aptex_fini(void);

int main (int argc, char ** argv)
{
  aptex_set_env(argc, argv);
  aptex_init();
  aptex_program();
  aptex_fini();

  return 0;
}
