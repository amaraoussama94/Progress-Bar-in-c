
# Application 
app :progbar.o   
	gcc progbar.o  -o Progress_Bar   
	 
#serveur

Server.o:progbar.c
	gcc -c progbar.c

clean:
#cleanup all object file
	  -rm *.o $(objects) 
	  -rm  Progress_Bar  