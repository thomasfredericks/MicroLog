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

#ifdef LOG_OUTPUT

#ifndef LOG_SEPARATOR
#define LOG_SEPARATOR " "
#endif

#define LOG_BEGIN(speed) LOG_OUTPUT.begin(speed)

#define __LOG_0(A)             \
    {                          \
        LOG_OUTPUT.println(A); \
    }

#define __LOG_1(A, B)                    \
    {                                    \
        LOG_OUTPUT.print(A);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.println(B);           \
    }

#define __LOG_2(A, B, C)                 \
    {                                    \
        LOG_OUTPUT.print(A);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(B);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.println(C);           \
    }

#define __LOG_3(A, B, C, D)              \
    {                                    \
        LOG_OUTPUT.print(A);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(B);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(C);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.println(D);           \
    }

#define __LOG_4(A, B, C, D, E)           \
    {                                    \
        LOG_OUTPUT.print(A);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(B);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(C);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(D);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.println(E);           \
    }

#define __LOG_5(A, B, C, D, E, F)        \
    {                                    \
        LOG_OUTPUT.print(A);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(B);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(C);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(D);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(E);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.println(F);           \
    }

#define __LOG_6(A, B, C, D, E, F, G)     \
    {                                    \
        LOG_OUTPUT.print(A);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(B);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(C);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(D);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(E);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(F);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.println(G);           \
    }

#define __LOG_7(A, B, C, D, E, F, G, H)  \
    {                                    \
        LOG_OUTPUT.print(A);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(B);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(C);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(D);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(E);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(F);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.print(G);             \
        LOG_OUTPUT.print(LOG_SEPARATOR); \
        LOG_OUTPUT.println(H);           \
    }

#define __LOG_8(A, B, C, D, E, F, G, H, I) \
    {                                      \
        LOG_OUTPUT.print(A);               \
        LOG_OUTPUT.print(LOG_SEPARATOR);   \
        LOG_OUTPUT.print(B);               \
        LOG_OUTPUT.print(LOG_SEPARATOR);   \
        LOG_OUTPUT.print(C);               \
        LOG_OUTPUT.print(LOG_SEPARATOR);   \
        LOG_OUTPUT.print(D);               \
        LOG_OUTPUT.print(LOG_SEPARATOR);   \
        LOG_OUTPUT.print(E);               \
        LOG_OUTPUT.print(LOG_SEPARATOR);   \
        LOG_OUTPUT.print(F);               \
        LOG_OUTPUT.print(LOG_SEPARATOR);   \
        LOG_OUTPUT.print(G);               \
        LOG_OUTPUT.print(LOG_SEPARATOR);   \
        LOG_OUTPUT.print(H);               \
        LOG_OUTPUT.print(LOG_SEPARATOR);   \
        LOG_OUTPUT.println(I);             \
    }

#define __LOG_9(A, B, C, D, E, F, G, H, I, J) \
    {                                         \
        LOG_OUTPUT.print(A);                  \
        LOG_OUTPUT.print(LOG_SEPARATOR);      \
        LOG_OUTPUT.print(B);                  \
        LOG_OUTPUT.print(LOG_SEPARATOR);      \
        LOG_OUTPUT.print(C);                  \
        LOG_OUTPUT.print(LOG_SEPARATOR);      \
        LOG_OUTPUT.print(D);                  \
        LOG_OUTPUT.print(LOG_SEPARATOR);      \
        LOG_OUTPUT.print(E);                  \
        LOG_OUTPUT.print(LOG_SEPARATOR);      \
        LOG_OUTPUT.print(F);                  \
        LOG_OUTPUT.print(LOG_SEPARATOR);      \
        LOG_OUTPUT.print(G);                  \
        LOG_OUTPUT.print(LOG_SEPARATOR);      \
        LOG_OUTPUT.print(H);                  \
        LOG_OUTPUT.print(LOG_SEPARATOR);      \
        LOG_OUTPUT.print(I);                  \
        LOG_OUTPUT.print(LOG_SEPARATOR);      \
        LOG_OUTPUT.println(J);                \
    }

#define __LOG_X(x, A, B, C, D, E, F, G, H, I, J, MACRO, ...) MACRO

#define LOG(...) __LOG_X(, ##__VA_ARGS__,      \
                         __LOG_9(__VA_ARGS__), \
                         __LOG_8(__VA_ARGS__), \
                         __LOG_7(__VA_ARGS__), \
                         __LOG_6(__VA_ARGS__), \
                         __LOG_5(__VA_ARGS__), \
                         __LOG_4(__VA_ARGS__), \
                         __LOG_3(__VA_ARGS__), \
                         __LOG_2(__VA_ARGS__), \
                         __LOG_1(__VA_ARGS__), \
                         __LOG_0(__VA_ARGS__))

#define LOG_ARRAY(array, length)                  \
    do {                                                \
        LOG_OUTPUT.print(F(#array));                     \
        LOG_OUTPUT.print(F(": [ "));                    \
        for (size_t i = 0; i < (length); ++i) {         \
            LOG_OUTPUT.print((array)[i]);               \
            if (i < (length) - 1)                       \
                LOG_OUTPUT.print(F(", "));              \
        }                                               \
        LOG_OUTPUT.println(F(" ]"));                    \
    } while (0)

#else
#define LOG(...)
#define LOG_BEGIN(speed)
#define LOG_ARRAY(...)
#endif // MICRO_LOG
#endif //__MICRO_LOG__
