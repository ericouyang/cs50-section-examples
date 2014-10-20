#
# Makefile
#
# Computer Science 50
# Week 6
#
# Eric Ouyang <eouyang@college.harvard.edu>
# Frederick Widjaja <fwidjaja@college.harvard.edu>
#

all: linked_lists0 linked_lists0_sln hashtable0 hashtable0_sln

linked_lists0:
	clang -ggdb3 -O0 -std=c99 -Wall -Werror -o linked_lists0 linked_lists0.c cs50_linked_lists.c -lm

linked_lists0_sln:
	clang -ggdb3 -O0 -std=c99 -Wall -Werror -o linked_lists0_sln linked_lists0.c cs50_linked_lists_sln.c -lm

hashtable0:
	clang -ggdb3 -O0 -std=c99 -Wall -Werror -o hashtable0 hashtable0.c cs50_hashtable.c -lm

hashtable0_sln:
	clang -ggdb3 -O0 -std=c99 -Wall -Werror -o hashtable0_sln hashtable0.c cs50_hashtable_sln.c -lm

clean:
	rm -f *.o a.out core linked_lists0 linked_lists0_sln hashtable0 hashtable0_sln
