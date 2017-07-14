TESTS := stdc stdc++ python2 python3

check: $(TESTS)
	@set -e; for fn in $(TESTS); do \
		./$$fn; \
		echo $$fn: OK; \
	done
	@echo Done.

GEN := ../tools/keymap-gen
DATA := ../data/keymaps.csv
SOURCES := $(GEN) $(DATA)

.DELETE_ON_ERROR:

stdc: stdc.c osx2win32.h
	$(CC) -o $@ $^
osx2win32.h: $(SOURCES)
	$(GEN) --lang stdc code-map $(DATA) osx win32 > $@

stdc++: stdc++.cc osx2win32.hh
	$(CC) -o $@ $^
osx2win32.hh: $(SOURCES)
	$(GEN) --lang stdc++ code-map $(DATA) osx win32 > $@

python2: osx2win32.py
osx2win32.py: $(SOURCES)
	$(GEN) --lang python2 code-map $(DATA) osx win32 > $@

clean:
	rm -f osx2win32.*
	rm -f stdc stdc++
