plot iter=val:
	gcc IFS.c transformations.c && ./a.out $(iter) 
	gnuplot -e "input_data='out.bin'" plot.plg with dots