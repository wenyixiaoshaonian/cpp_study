
objects = hello_world.o abs.o

hello_world : $(objects)
	cc -o  $@ -g $(objects)

$(objects) : %.o:%.c
	cc -c -g  $< -o $@

clean :
	rm *.o hello_world
