
# Use the MinGW64 cross compiler
CC := i686-w64-mingw32-gcc

# CFLAGS necessary to compile SDL2 programs
# using included SDL2
SDL2_CFLAGS := -ISDL2-2.0.3/include

# LDFLAGS for linking against libSDL2 statically
SDL2_LDFLAGS := -LSDL2-2.0.3/i686-w64-mingw32/lib/ \
                -lmingw32 -static -lSDL2main -lSDL2 -lm \
                -ldinput8 -ldxguid -ldxerr8 -luser32 -lgdi32 \
                -lwinmm -limm32 -lole32 -loleaut32 -lshell32 \
                -lversion -luuid -static-libgcc

CFLAGS := -std=c99 -Wall $(SDL2_CFLAGS)
LDFLAGS := $(SDL2_LDFLAGS)

all : gme.exe

gme.exe : main.o
	$(CC) -o $@ $^ $(LDFLAGS)

clean:
	$(RM) -f *.o gme.exe
