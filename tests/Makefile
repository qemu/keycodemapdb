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

stdc: stdc.c osx2win32.h osx2win32_name.h \
             osx2xkb.h osx2xkb_name.h \
             html2win32.h html2win32_name.h \
             osx.h osx_name.h
	$(CC) -o $@ $^
osx2win32.h: $(SOURCES)
	$(GEN) --lang stdc code-map $(DATA) osx win32 > $@
osx2win32_name.h: $(SOURCES)
	$(GEN) --lang stdc name-map $(DATA) osx win32 > $@
osx2xkb.h: $(SOURCES)
	$(GEN) --lang stdc code-map $(DATA) osx xkb > $@
osx2xkb_name.h: $(SOURCES)
	$(GEN) --lang stdc name-map $(DATA) osx xkb > $@
html2win32.h: $(SOURCES)
	$(GEN) --lang stdc code-map $(DATA) html win32 > $@
html2win32_name.h: $(SOURCES)
	$(GEN) --lang stdc name-map $(DATA) html win32 > $@
osx.h: $(SOURCES)
	$(GEN) --lang stdc code-table $(DATA) osx > $@
osx_name.h: $(SOURCES)
	$(GEN) --lang stdc name-table $(DATA) osx > $@

stdc++: stdc++.cc osx2win32.hh osx2win32_name.hh \
             osx2xkb.hh osx2xkb_name.hh \
             html2win32.hh html2win32_name.hh \
             osx.hh osx_name.hh
	$(CC) -o $@ $^
osx2win32.hh: $(SOURCES)
	$(GEN) --lang stdc++ code-map $(DATA) osx win32 > $@
osx2win32_name.hh: $(SOURCES)
	$(GEN) --lang stdc++ name-map $(DATA) osx win32 > $@
osx2xkb.hh: $(SOURCES)
	$(GEN) --lang stdc++ code-map $(DATA) osx xkb > $@
osx2xkb_name.hh: $(SOURCES)
	$(GEN) --lang stdc++ name-map $(DATA) osx xkb > $@
html2win32.hh: $(SOURCES)
	$(GEN) --lang stdc++ code-map $(DATA) html win32 > $@
html2win32_name.hh: $(SOURCES)
	$(GEN) --lang stdc++ name-map $(DATA) html win32 > $@
osx.hh: $(SOURCES)
	$(GEN) --lang stdc++ code-table $(DATA) osx > $@
osx_name.hh: $(SOURCES)
	$(GEN) --lang stdc++ name-table $(DATA) osx > $@

python2: osx2win32.py osx2win32_name.py \
         osx2xkb.py osx2xkb_name.py \
         html2win32.py html2win32_name.py \
         osx.py osx_name.py
osx2win32.py: $(SOURCES)
	$(GEN) --lang python2 code-map $(DATA) osx win32 > $@
osx2win32_name.py: $(SOURCES)
	$(GEN) --lang python2 name-map $(DATA) osx win32 > $@
osx2xkb.py: $(SOURCES)
	$(GEN) --lang python2 code-map $(DATA) osx xkb > $@
osx2xkb_name.py: $(SOURCES)
	$(GEN) --lang python2 name-map $(DATA) osx xkb > $@
html2win32.py: $(SOURCES)
	$(GEN) --lang python2 code-map $(DATA) html win32 > $@
html2win32_name.py: $(SOURCES)
	$(GEN) --lang python2 name-map $(DATA) html win32 > $@
osx.py: $(SOURCES)
	$(GEN) --lang python2 code-table $(DATA) osx > $@
osx_name.py: $(SOURCES)
	$(GEN) --lang python2 name-table $(DATA) osx > $@

clean:
	rm -f osx2win32.*
	rm -f osx2win32_name.*
	rm -f osx2xkb.*
	rm -f osx2xkb_name.*
	rm -f html2win32.*
	rm -f html2win32_name.*
	rm -f osx.*
	rm -f osx_name.*
	rm -f stdc stdc++
