/* A Bison parser, made from imcc.y, by GNU bison 1.75.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef BISON_IMCPARSER_H
# define BISON_IMCPARSER_H

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CALL = 258,
     GOTO = 259,
     ARG = 260,
     PRINT = 261,
     IF = 262,
     UNLESS = 263,
     NEW = 264,
     END = 265,
     SAVEALL = 266,
     RESTOREALL = 267,
     SUB = 268,
     NAMESPACE = 269,
     ENDNAMESPACE = 270,
     CLASS = 271,
     ENDCLASS = 272,
     SYM = 273,
     LOCAL = 274,
     PARAM = 275,
     INC = 276,
     DEC = 277,
     SHIFT_LEFT = 278,
     SHIFT_RIGHT = 279,
     INTV = 280,
     FLOATV = 281,
     STRINGV = 282,
     DEFINED = 283,
     LOG_XOR = 284,
     RELOP_EQ = 285,
     RELOP_NE = 286,
     RELOP_GT = 287,
     RELOP_GTE = 288,
     RELOP_LT = 289,
     RELOP_LTE = 290,
     GLOBAL = 291,
     ADDR = 292,
     CLONE = 293,
     RESULT = 294,
     RETURN = 295,
     POW = 296,
     SHIFT_RIGHT_U = 297,
     LOG_AND = 298,
     LOG_OR = 299,
     COMMA = 300,
     ESUB = 301,
     LABEL = 302,
     EMIT = 303,
     EOM = 304,
     IREG = 305,
     NREG = 306,
     SREG = 307,
     PREG = 308,
     IDENTIFIER = 309,
     STRINGC = 310,
     INTC = 311,
     FLOATC = 312,
     REG = 313,
     MACRO = 314,
     PARROT_OP = 315,
     VAR = 316
   };
#endif
#define CALL 258
#define GOTO 259
#define ARG 260
#define PRINT 261
#define IF 262
#define UNLESS 263
#define NEW 264
#define END 265
#define SAVEALL 266
#define RESTOREALL 267
#define SUB 268
#define NAMESPACE 269
#define ENDNAMESPACE 270
#define CLASS 271
#define ENDCLASS 272
#define SYM 273
#define LOCAL 274
#define PARAM 275
#define INC 276
#define DEC 277
#define SHIFT_LEFT 278
#define SHIFT_RIGHT 279
#define INTV 280
#define FLOATV 281
#define STRINGV 282
#define DEFINED 283
#define LOG_XOR 284
#define RELOP_EQ 285
#define RELOP_NE 286
#define RELOP_GT 287
#define RELOP_GTE 288
#define RELOP_LT 289
#define RELOP_LTE 290
#define GLOBAL 291
#define ADDR 292
#define CLONE 293
#define RESULT 294
#define RETURN 295
#define POW 296
#define SHIFT_RIGHT_U 297
#define LOG_AND 298
#define LOG_OR 299
#define COMMA 300
#define ESUB 301
#define LABEL 302
#define EMIT 303
#define EOM 304
#define IREG 305
#define NREG 306
#define SREG 307
#define PREG 308
#define IDENTIFIER 309
#define STRINGC 310
#define INTC 311
#define FLOATC 312
#define REG 313
#define MACRO 314
#define PARROT_OP 315
#define VAR 316




#ifndef YYSTYPE
#line 362 "imcc.y"
typedef union {
    int t;
    char * s;
    SymReg * sr;
    Instruction *i;
} yystype;
/* Line 1281 of /usr/share/bison/yacc.c.  */
#line 169 "imcparser.h"
# define YYSTYPE yystype
#endif

extern YYSTYPE yylval;


#endif /* not BISON_IMCPARSER_H */

