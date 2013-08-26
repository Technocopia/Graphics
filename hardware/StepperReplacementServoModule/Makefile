CFILES :=	$(wildcard *.scad) 
OFILES := 	$(CFILES:%.scad=%.stl)

all:clean $(OFILES)
	openscad -o 

%.stl: %.scad
	openscad -o $@ $<

clean:
	rm -rf $(OFILES)
