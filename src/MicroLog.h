/*
 MicroLog.h - This version by 2023 Thomas O Fredericks.
 Based on MicroDebug library by 2014 Roberto Lo Giacco.

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU Lesser General Public License as 
 published by the Free Software Foundation, either version 3 of the 
 License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __MICRO_LOG__
#define __MICRO_LOG__

    #if (!defined(LOG_DEACTIVATE))

        #define LOG_ACTIVATED

        #ifndef LOG_STREAM
            #define MICRO_LOG_STREAM         Serial
        #endif

        #ifndef LOG_SEPARATOR
            #define LOG_SEPARATOR    " "
        #endif

        #define LOG_BEGIN(speed)     MICRO_LOG_STREAM.begin(speed)

        #define __LOG_0(A)                  {MICRO_LOG_STREAM.println(A);}

        #define __LOG_1(A,B)                {MICRO_LOG_STREAM.print(A);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.println(B);}

        #define __LOG_2(A,B,C)              {MICRO_LOG_STREAM.print(A);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(B);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.println(C);}

        #define __LOG_3(A,B,C,D)            {MICRO_LOG_STREAM.print(A);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(B);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(C);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.println(D);}

        #define __LOG_4(A,B,C,D,E)          {MICRO_LOG_STREAM.print(A);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(B);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(C);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(D);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.println(E);}

        #define __LOG_5(A,B,C,D,E,F)        {MICRO_LOG_STREAM.print(A);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(B);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(C);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(D);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(E);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.println(F);}

        #define __LOG_6(A,B,C,D,E,F,G)      {MICRO_LOG_STREAM.print(A);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(B);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(C);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(D);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(E);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(F);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.println(G);}

        #define __LOG_7(A,B,C,D,E,F,G,H)    {MICRO_LOG_STREAM.print(A);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(B);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(C);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(D);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(E);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(F);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(G);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.println(H);}

        #define __LOG_8(A,B,C,D,E,F,G,H,I)  {MICRO_LOG_STREAM.print(A);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(B);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(C);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(D);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(E);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(F);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(G);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(H);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.println(I);}

        #define __LOG_9(A,B,C,D,E,F,G,H,I,J)  {MICRO_LOG_STREAM.print(A);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(B);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(C);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(D);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(E);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(F);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(G);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(H);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.print(I);MICRO_LOG_STREAM.print(LOG_SEPARATOR);\
                                              MICRO_LOG_STREAM.println(J);}

        #define __LOG_X(x,A,B,C,D,E,F,G,H,I,J,MACRO, ...) MACRO

        #define LOG(...)           __LOG_X(, ##__VA_ARGS__,\
                                                __LOG_9(__VA_ARGS__),\
                                                __LOG_8(__VA_ARGS__),\
                                                __LOG_7(__VA_ARGS__),\
                                                __LOG_6(__VA_ARGS__),\
                                                __LOG_5(__VA_ARGS__),\
                                                __LOG_4(__VA_ARGS__),\
                                                __LOG_3(__VA_ARGS__),\
                                                __LOG_2(__VA_ARGS__),\
                                                __LOG_1(__VA_ARGS__),\
                                                __LOG_0(__VA_ARGS__)\
                                            )

    #else
        #define LOG(...)
        #define LOG_BEGIN(speed)
    #endif // MICRO_LOG
#endif //__MICRO_LOG__
