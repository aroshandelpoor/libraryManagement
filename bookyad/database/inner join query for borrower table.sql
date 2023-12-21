SELECT Borrower_Details.Borrower_Id, Student_Details.Student_Name, Book_Info.Book_Title, Borrower_Details.Borrowed_From, Borrower_Details.Borrowed_TO, Borrower_Details.Actual_Return_Date, Staff_Details.نام_پرسنل
FROM Borrower_Details
INNER JOIN Student_Details ON Borrower_Details.Borrower_Id=Student_Details.Borrower_Id
INNER JOIN Book_Info ON Student_Details.Borrower_Id = Book_Info.Borrower_Id
INNER JOIN Staff_Details ON Borrower_Details.Issued_by = Staff_Details.کد_پرسنلی;


--SELECT Borrower_Details.Borrower_Id, Student_Details.Student_Name, Book_Info.Book_Title, Borrower_Details.Borrowed_From, Borrower_Details.Borrowed_TO, Borrower_Details.Actual_Return_Date, Staff_Details.نام_پرسنل
--FROM Borrower_Details
--INNER JOIN Student_Details ON Borrower_Details.Borrower_Id=Student_Details.Borrower_Id
--INNER JOIN Book_Info ON Borrower_Details.Book_ID = Book_Info.ISBN_Code
--INNER JOIN Staff_Details ON Borrower_Details.Issued_by = Staff_Details.کد_پرسنلی;
