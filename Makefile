
# Application 
app :progbar.o   
	gcc progbar.o  -o Progress_Bar   
	 
#Progress_Bar

progbar.o:progbar.c
	gcc -c progbar.c

clean:
#cleanup all object file
	  -rm *.o $(objects) 
	  -rm  Progress_Bar  