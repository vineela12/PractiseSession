
+	pseudo code
+	
+	1.       //start
+	2.      //Accept input from the user.
+	3.      //get the mon(Start_date) ,day(Start_date) , year(Start_date)
+	
+	
+	4.      // make sure month days are correct
+	       // return TRUE if days exceeds in a month
+		 
+		   Make sure the the value of  month > 1 and month < 12 to make it valid.
+		   And the date is in the particular range of month first date and last date.
+		 
+		    int mydate::exceedsDaysInMonth(){
+	        int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
+	        if ( month < 1 || month > 12 || day > days[month-1])
+	        return TRUE;
+	        else
+	        return FALSE;
+	       }
+	
+	5.  // convert numeric month into string
+	
+			Assign valuse of the month to the string . Like 1 = jan.
+			
+	        string mydate::month2string(){
+	        char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
+	        if ( exceedsDaysInMonth() ) {
+	        if ( ! (month < 1 || month > 12) )
+	        return months[month-1];
+	        else
+	        return "Unknown month";
+	        }
+	        else
+	        return "Unknown month";
+	        }
+	
+	6.  // return TRUE if a year is leap
+	
+			Check if the year is a leap year or not.
+			
+	        int mydate::isLeapYear(){
+	        if ( (year % 4) != 0 ){
+	        return FALSE;
+	        }
+	        else if ( (year % 400) != 0 ){
+	        return TRUE;
+	        }
+	        else if ( (year % 100) == 0 ){
+	        return FALSE;
+	        }
+	        else
+	        {
+	        return FALSE;
+	        }
+	7.  // validate and calculate End date
+	
+	        void mydate::end_date(){
+	        int ed, em, ey;
+	        int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
+	        if ( year < 0 ){
+	        cerr << year << " is not a valid year" << endl;
+	        exit(1);
+	        }
+	        if ( exceedsDaysInMonth() ){
+	        if ( month == 2 && day == 29 ){
+	        if ( ! isLeapYear() ){
+	        cerr << year << " is not a leap year, so Feb doesn't have 29 days" << endl;
+	        exit(1);
+	        }
+	        }
+	        else
+	        {
+	        cerr << "Bad day value month - " << month << " (" << month2string();
+	        cerr << ") doesn't have " << day << " days "<< endl;
+	        exit(1);
+	        }
+	        }
+	
+	8.  // calculate end date based on the option
+	
+			For one day:
+			
+	        ed=day;
+	        em=month;
+	        ey=year;
+	        ed++;
+	        if ( ed > days[month-1]){
+	        ed=1;
+	        em++;
+	        if ( em > 12 )
+	        { ey++; em=1; }
+	        }
+	        cout << "Valid date, found and end date is " << ed << "/" << em << "/" << ey << endl;
+	        }
+			
+			For one month:
+			
+			Add 1 months to the current month and if month exceeds 12  year is incermented and reset to 1 of the next year.
+			
+			ed=day;
+	        em=month;
+	        ey=year;
+	        ed = input day;
+			em = em+1;
+	        if ( ed > days[month-1]){
+	        ed=1;
+	        em++;
+	        if ( em > 12 )
+	        { ey++; em=1; }
+	        }
+	        cout << "Valid date, found and end date is " << ed << "/" << em << "/" << ey << endl;
+	        }
+			
+			For one year:
+			
+			increment the value of current year also checking the end conditions.
+			
+			ed=day;
+	        em=month;
+	        ey=year;
+	        ed = input day;
+			ey = ey+1;
+			if ( ed > days[month-1]){
+	        ed=1; 
+	        em++;
+	        if ( em > 12 )
+	        { ey++; em=1; }
+	        }
+	        cout << "Valid date, found and end date is " << ed << "/" << em << "/" << ey << endl;
+	        } 
+			
+			For one quarter:
+			
+			Add 3 months to the current month and if month exceeds 12  year is incremented and reset to 1 of the next year.
+			
+			ed=day;
+	        em=month;
+	        ey=year;
+	        ed = input day;
+			em = em+3;
+	        if ( ed > days[month-1]){
+	        ed=1;
+	        em++;
+	        if ( em > 12 )
+	        { ey++; em=1; }
+	        }
+	        cout << "Valid date, found and new start date is " << ed << "/" << em << "/" << ey << endl;
+	        }
+			
+			
+	9.    // we get the datediff() of input start_date and input end_date.
+		 //And add that to em/ed/ey  new start  date to get new end date.
+	 
+	
+			
