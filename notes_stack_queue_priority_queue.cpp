Stack:
	Stack is a linear data structure that follows the LIFO(Last in first out) principle.
	
	- Stack has one end only.
	- It contains only one pointer pointing to the topmost element of the stack.
	
	eg:
		Recursion
		Do and Un-Do mechanism.
		
	Stack Functions:
		1. push(): use to store element in stack.
		2. pop(): use to remove elment from the top of the stack.
		3. top(): Returns the element at the top of the stack without removing it.
		4. empty(): Returnns true if stack is empty otherwise false.
		5. size(): return number of elements of stack.
		


Polish Notation:
	This type of notation was introduced by the Polish mathematician Lukasiewicz. 
	- Polish notation in data structure tells us about different ways to write an 
		arithmetic expression. 
		
	- An arithmetic expression contains 2 things:
		1. Operator:
			Operator is a symbol that represents a specific operation to be performed.
			eg:
				+, -, *, /, ^, %

		
		2. Operand:	
			Operand is a value or a variable on which an opertion is performed by an operator.
			eg:
				0 to 9, a to z, A to Z
	
	
	
	- There are mainly three type of Polish Notation:
		1. Infix notation:
			This polish notation in data structure states that the operator is written 
			in between the operands.
			
			eg:
				( a + b ) x c ( a + b ) x c
				a + b - c + d
				( a x b ) + ( c / d ) ( a x b )
			
			
		2. Prefix notation:
			This notation in data structure states that the operator should be present as a
			prefix or before the operands.
			eg:
				  + a b
				  + - a b c + - a b c
				  x a b x a b
			
			
		3. Postfix notation:
			This notation in data structure states that the operator should be present as a
			after the operands.
			
			- postfix notation is a computer understandable format.
			
			eg:
				 a b -
				 a b / c d /
				 12 5 + 3 / 12 5 + 3 /
				 8 2 3 x + 8 2 3 x +
	
	
	
	
Queue:
	Queue is a linear data structure that stores the data in First In First Out order.
	eg:
		printing pages in printer.
		downloading files in some application.
		
	- Operations implemented on the queue:
		1. enqueue(): adding an element to the end of the queue.
		2. dequeue(): Removing an element from the front of the queue.
		3. front():	Retrieving the element at the front of the queue without removing it.
		4. rear(): Retrieving the element at the rear of the queue without removing it.
		5. empty(): return true if queue is empty, otherwise it return false.
	
	- Queue is define inside <queue> header file.
	- There are mainly four types of queue:
		
	1. Simple queue (Linear Queue):
		
	2. Circular queue:
		The last position is connected back to the first t omake a circle.
		- Its prevents wastage of space in a linear queue.
		
	3. Priority Queue:
		Elements are based on priority, not just an order.
		- Heigher priority elements are dequeued before lower ones.
		
	4. Double ended queue( DEqueue ):
		Insertion and deletion can happen at both ends( front and rear). 
		- (i). Input restricted queue: Insertion at only onne end.
		- (ii). Output restricted queue. Deletion from only one end.
		
		
Searching:
	Search element one by one.
	They are mainly two type:
		1. Linear Search:
			Search element one by one:
			Complexity:		O(n).
			
			Algorithm:
				(i). 	Start from the first element.
				(ii).	Compare each element with the target.
				(iii).	If a match is found , return the index.
				(iv).	If end is reached without a match, return -1(not found).7
			
			
		2. Binary Search:
			Divide and conqure on sorted array.
			Steps:
				Compare middle --> move left or right
			Complexity: O( log n ).
			
			- Array must be sorted.
	
	
	Sorting:
		Arranging array elements in incresing or decreasing order is called sorting.
		
	1. Selection sort:
		
		Algo:
		(i).	Start from the first element.
		(ii).	Find the smallest element in the unsorted part of the array.
		(iii).	Swap it with the first element of the unsorted part.
		(iv).	Move the boundary of the sorted part by one.
		(v).	Repeat until the entire array is sorted.
		
		- Complexity:
			- Best case: O( n^2 );
			- Avg case: O( n^2 );
			- Worst case: O( n^2 );
	 
	
	
	
	
	
	
	
	
	
	







		
