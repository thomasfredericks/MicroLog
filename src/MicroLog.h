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

#ifndef __MICRO_MICRO_LOG__
#define __MICRO_MICRO_LOG__

#ifdef MICRO_LOG_OUTPUT

#ifndef MICRO_LOG_SEPARATOR
#define MICRO_LOG_SEPARATOR " "
#endif

#define MICRO_LOG_BEGIN(speed) MICRO_LOG_OUTPUT.begin(speed)

#define __MICRO_LOG_0(A)             \
    {                          \
        MICRO_LOG_OUTPUT.println(A); \
    }

#define __MICRO_LOG_1(A, B)                    \
    {                                    \
        MICRO_LOG_OUTPUT.print(A);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.println(B);           \
    }

#define __MICRO_LOG_2(A, B, C)                 \
    {                                    \
        MICRO_LOG_OUTPUT.print(A);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(B);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.println(C);           \
    }

#define __MICRO_LOG_3(A, B, C, D)              \
    {                                    \
        MICRO_LOG_OUTPUT.print(A);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(B);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(C);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.println(D);           \
    }

#define __MICRO_LOG_4(A, B, C, D, E)           \
    {                                    \
        MICRO_LOG_OUTPUT.print(A);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(B);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(C);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(D);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.println(E);           \
    }

#define __MICRO_LOG_5(A, B, C, D, E, F)        \
    {                                    \
        MICRO_LOG_OUTPUT.print(A);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(B);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(C);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(D);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(E);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.println(F);           \
    }

#define __MICRO_LOG_6(A, B, C, D, E, F, G)     \
    {                                    \
        MICRO_LOG_OUTPUT.print(A);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(B);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(C);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(D);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(E);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(F);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.println(G);           \
    }

#define __MICRO_LOG_7(A, B, C, D, E, F, G, H)  \
    {                                    \
        MICRO_LOG_OUTPUT.print(A);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(B);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(C);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(D);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(E);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(F);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.print(G);             \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR); \
        MICRO_LOG_OUTPUT.println(H);           \
    }

#define __MICRO_LOG_8(A, B, C, D, E, F, G, H, I) \
    {                                      \
        MICRO_LOG_OUTPUT.print(A);               \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR);   \
        MICRO_LOG_OUTPUT.print(B);               \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR);   \
        MICRO_LOG_OUTPUT.print(C);               \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR);   \
        MICRO_LOG_OUTPUT.print(D);               \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR);   \
        MICRO_LOG_OUTPUT.print(E);               \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR);   \
        MICRO_LOG_OUTPUT.print(F);               \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR);   \
        MICRO_LOG_OUTPUT.print(G);               \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR);   \
        MICRO_LOG_OUTPUT.print(H);               \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR);   \
        MICRO_LOG_OUTPUT.println(I);             \
    }

#define __MICRO_LOG_9(A, B, C, D, E, F, G, H, I, J) \
    {                                         \
        MICRO_LOG_OUTPUT.print(A);                  \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR);      \
        MICRO_LOG_OUTPUT.print(B);                  \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR);      \
        MICRO_LOG_OUTPUT.print(C);                  \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR);      \
        MICRO_LOG_OUTPUT.print(D);                  \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR);      \
        MICRO_LOG_OUTPUT.print(E);                  \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR);      \
        MICRO_LOG_OUTPUT.print(F);                  \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR);      \
        MICRO_LOG_OUTPUT.print(G);                  \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR);      \
        MICRO_LOG_OUTPUT.print(H);                  \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR);      \
        MICRO_LOG_OUTPUT.print(I);                  \
        MICRO_LOG_OUTPUT.print(MICRO_LOG_SEPARATOR);      \
        MICRO_LOG_OUTPUT.println(J);                \
    }

#define __MICRO_LOG_X(x, A, B, C, D, E, F, G, H, I, J, MACRO, ...) MACRO

#define LOG(...) __MICRO_LOG_X(, ##__VA_ARGS__,      \
                         __MICRO_LOG_9(__VA_ARGS__), \
                         __MICRO_LOG_8(__VA_ARGS__), \
                         __MICRO_LOG_7(__VA_ARGS__), \
                         __MICRO_LOG_6(__VA_ARGS__), \
                         __MICRO_LOG_5(__VA_ARGS__), \
                         __MICRO_LOG_4(__VA_ARGS__), \
                         __MICRO_LOG_3(__VA_ARGS__), \
                         __MICRO_LOG_2(__VA_ARGS__), \
                         __MICRO_LOG_1(__VA_ARGS__), \
                         __MICRO_LOG_0(__VA_ARGS__))

#define MICRO_LOG_ARRAY(array, length)                  \
    do {                                                \
        MICRO_LOG_OUTPUT.print(F(#array));                     \
        MICRO_LOG_OUTPUT.print(F(": [ "));                    \
        for (size_t i = 0; i < (length); ++i) {         \
            MICRO_LOG_OUTPUT.print((array)[i]);               \
            if (i < (length) - 1)                       \
                MICRO_LOG_OUTPUT.print(F(", "));              \
        }                                               \
        MICRO_LOG_OUTPUT.println(F(" ]"));                    \
    } while (0)

#else
#define MICRO_LOG(...)
#define MICRO_LOG_BEGIN(speed)
#define MICRO_LOG_ARRAY(...)
#endif // MICRO_LOG
#endif //__MICRO_MICRO_LOG__
