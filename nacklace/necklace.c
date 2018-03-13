int findMaxBeads(char arr[], int size)
{ 

	int head = 0;		//head
	int tail = size; 	//tail
	int currentMax = 0;	//number to return
	int i;			//iterator
	int ccount = 0; 	//count though the while loops
	char cvalue;		//the character that I am looking at
	int g = 0;
	int h = 0;
	for(i = 0; i < size ;i++){
		if(arr[head] == 'w')
		{ 
			cvalue = 'w';
			ccount = 0;
			while(cvalue != 'b')
			{ 

				ccout++;
				cvalue = arr[ccount + head];

			}
			cvalue = arr[tail]
			while(cvalue == arr[tail])
			{ 
				g ++;
				ccount++;
				cvalue = arr[tail - g]; 

			}
			if (currentMax < ccount)
			{ 

				currentMax = ccount;

			}

			g = 0;

		}
		if(arr[head] == 'b') // double check for if the tail is r
		{ 
			cvalue = 'b';
			ccount = 0;
			while(cvalue != 'w')
			{ 

				ccoutn++;
				cvalue = arr[ccount + head];

			}
			cvalue = arr[tail]
			while(cvalue == arr[tail])
			{ 
				g ++;
				ccount++;
				cvalue = arr[tail - g]; 

			}
			g = 0;
			if (currentMax < ccount)
			{ 

				currentMax = ccount;

			}
		}
		//r is not finished and is having issues with figureing out what to do after I figure it out
		if(arr[head] == 'r')
		{ 
			cvalue = 'r';
			g = 0;
			while(cvalue != 'r')
			{ 

				ccount ++; 
				g++;
				cvalue = arr[head + g];

			}
			//
			h = g;
			while(cvalue == arr[head + g])
			{ 

				ccount ++;
				h++;
				cvalue = arr[head + h];

			}
			//
			if (currentMax < ccount)
			{ 

				currentMax = ccount;

			}
		}
		if(arr[tail] == 'r')
		{ 
			cvalue = 'r';
			g = 0;
			while(cvalue != 'r')
			{ 

				ccount ++; 
				g++;
				cvalue = arr[tail + g];

			}
			//
			h = g;
			while(cvalue == arr[tail + g])
			{ 

				ccount ++;
				h++;
				cvalue = arr[tail + h];

			}
			//
			if (currentMax < ccount)
			{ 

				currentMax = ccount;

			}
		}
	tail = (tail + 1) % size;
	head = (head + 1) % size; 
	

	}//end of for loop
	
	return currentMax;

}//end of function
