
tiny: tiny.c
	$(CC) -o tiny tiny.c

clean:
	@rm -f tiny *.o

check:
	echo "[$(CC)]"

.PHONY: clean
