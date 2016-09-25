SUBDIRS := $(wildcard */.)
SUBDIRS := $(filter-out Utils/., $(SUBDIRS))

all: $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) -C $@

.PHONY: all $(SUBDIRS)