TARGET=hex2dec
OBJS=hex2dec.o
LIBS=

$(TARGET): $(OBJS)
	$(CC) -Wall -o $@ $(OBJS)

all: $(TARGET)

clean:
	-rm -f $(TARGET) $(OBJS)

install: $(TARGET)
	cp -p $(TARGET) /usr/local/bin
	chmod 755 /usr/local/bin/`basename "$(TARGET)"`
