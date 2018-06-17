set terminal png
set output 'graph.png'
set datafile separator ","
set xtics rotate by -45
plot "tmp.csv" using 6:xticlabels(2) with boxes



