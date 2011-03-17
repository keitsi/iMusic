CFLAGS=`pkg-config --cflags gtk+-2.0 gstreamer-0.10`
LIBS=`pkg-config --libs gtk+-2.0 gstreamer-0.10`

all: player

player: main.o
	gcc -o iMusic main.o $(LIBS)
	
%.o: %.c
	gcc -g -c $< $(CFLAGS)

