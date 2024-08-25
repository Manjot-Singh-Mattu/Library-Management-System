 #include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
class Library
{
	public:
	void clearScreen();	
	void pause(float seconds);
	
};

void Library::clearScreen() {
#ifdef _WIN32
    system("CLS");
#else
    system("clear");
#endif
}

void Library::pause(float seconds)
{
    this_thread::sleep_for(chrono::duration<float>(seconds));
}

class Books:public Library
{
	vector<string> DSA_titles{
        "Data Structures and Algorithms", "Advanced Data Structures",
        "Introduction to Algorithms", "Algorithms Unlocked",
        "Data Structures and Algorithm Analysis", "Algorithm Design",
        "The Art of Computer Programming", "Problem Solving with Algorithms",
        "Data Structures Using C", "Algorithms in C",
        "Cracking the Coding Interview", "Data Structures and Algorithms in Java",
        "Python Algorithms", "Algorithms Illuminated",
        "Grokking Algorithms", "Data Structures in JavaScript",
        "Mastering Algorithms with C", "Essential Algorithms",
        "Algorithms for Dummies", "Data Structures in Python"};

    vector<string> DSA_authors{
        "Michael T. Goodrich", "Peter Brass",
        "Thomas H. Cormen", "Thomas H. Cormen",
        "Mark Allen Weiss", "Jon Kleinberg",
        "Donald E. Knuth", "Bradley Green",
        "Yedidyah Langsam", "Robert Sedgewick",
        "Gayle Laakmann McDowell", "Robert Lafore",
        "Magnus Lie Hetland", "Tim Roughgarden",
        "Aditya Bhargava", "Michael McMillan",
        "Kyle Loudon", "Rod Stephens",
        "John Paul Mueller", "Michael T. Goodrich"};

    vector<string> OOPs_titles{
        "Object-Oriented Programming with C++", "Java: The Complete Reference",
        "Head First Java", "Effective Java",
        "Design Patterns", "C++ Primer",
        "The C++ Programming Language", "Java: How to Program",
        "Object-Oriented Analysis and Design", "Programming with C++",
        "Learning Python", "Object-Oriented Programming in C++",
        "Modern C++ Design", "Object-Oriented Programming with Java",
        "Python Object-Oriented Programming", "Object-Oriented Thought Process",
        "Thinking in Java", "Object-Oriented Design Patterns",
        "Head First Design Patterns", "C++ Standard Library"};

    vector<string> OOPs_authors{
        "E. Balagurusamy", "Herbert Schildt",
        "Kathy Sierra", "Joshua Bloch",
        "Erich Gamma", "Stanley B. Lippman",
        "Bjarne Stroustrup", "Paul Deitel",
        "Grady Booch", "D. Ravichandran",
        "Mark Lutz", "Robert Lafore",
        "Andrei Alexandrescu", "David J. Barnes",
        "Dusty Phillips", "Matt Weisfeld",
        "Bruce Eckel", "Erich Gamma",
        "Elaine M. Rich", "Nicolai M. Josuttis"};

    vector<string> Math_titles{
        "Calculus", "Linear Algebra",
        "Discrete Mathematics", "Advanced Engineering Mathematics",
        "Abstract Algebra", "Real Analysis",
        "Complex Analysis", "Probability and Statistics",
        "Mathematical Methods", "Numerical Analysis",
        "Graph Theory", "Differential Equations",
        "Topology", "Mathematical Logic",
        "Number Theory", "Operations Research",
        "Partial Differential Equations", "Mathematical Physics",
        "Mathematical Modeling", "Mathematical Biology"};

    vector<string> Math_authors{
        "James Stewart", "David C. Lay",
        "Kenneth H. Rosen", "Erwin Kreyszig",
        "David S. Dummit", "Walter Rudin",
        "Joseph Bak", "Sheldon M. Ross",
        "George E. P. Box", "Richard L. Burden",
        "Reinhard Diestel", "Richard Haberman",
        "James R. Munkres", "Joseph R. Shoenfield",
        "Ivan Niven", "Frederick S. Hillier",
        "Lawrence C. Evans", "Michael P. Brenner",
        "J. David Logan", "James D. Murray"};

    vector<string> COA_titles{
        "Computer Organization and Architecture", "Digital Logic Design",
        "Computer Systems Architecture", "Structured Computer Organization",
        "Computer Architecture: A Quantitative Approach", "Microprocessor Architecture",
        "Digital Design and Computer Architecture", "Computer Organization and Design",
        "Essentials of Computer Organization and Architecture", "Introduction to Computer Organization",
        "Computer System Design", "Digital Electronics",
        "Microprocessors and Interfacing", "Computer Architecture and Logic Design",
        "Fundamentals of Digital Logic", "Embedded Systems Design",
        "Computer System Fundamentals", "Advanced Computer Architecture",
        "Hardware and Computer Organization", "Computer Architecture for Dummies"};

    vector<string> COA_authors{
        "William Stallings", "M. Morris Mano",
        "Andrew S. Tanenbaum", "William Stallings",
        "John L. Hennessy", "John P. Hayes",
        "David Harris", "David A. Patterson",
        "Linda Null", "William Stallings",
        "Morris Mano", "Thomas C. Bartee",
        "Douglas V. Hall", "Alan Clements",
        "Thomas L. Floyd", "Wayne Wolf",
        "M. Morris Mano", "John L. Hennessy",
        "Charles P. Pfleeger", "Joe Kraynak"};

    vector<string> ED_titles{
        "Engineering Drawing", "Technical Drawing",
        "Fundamentals of Engineering Drawing", "Engineering Graphics",
        "AutoCAD for Engineers", "Basic Technical Drawing",
        "Engineering Drawing with AutoCAD", "Technical Drawing with Engineering Graphics",
        "Geometric Dimensioning and Tolerancing", "Drafting and Design",
        "Manual of Engineering Drawing", "Engineering Graphics Essentials",
        "Engineering Graphics and Design", "Introduction to Engineering Drawing",
        "Machine Drawing", "Engineering Drawing and Design",
        "Sketching for Engineers", "Engineering Graphics with AutoCAD",
        "Technical Graphics Communication", "Engineering Drawing and Sketching"};

    vector<string> ED_authors{
        "N.D. Bhatt", "Frederick E. Giesecke",
        "Warren J. Luzadder", "Frederick E. Giesecke",
        "Sham Tickoo", "Henry Cecil Spencer",
        "Jay D. Helsel", "Gary R. Bertoline",
        "David A. Madsen", "Cecil Howard Jensen",
        "Colin Simmons", "Karen R. Juneau",
        "Cecil Howard Jensen", "Cecil Howard Jensen",
        "N.D. Bhatt", "Cecil Howard Jensen",
        "Thomas E. French", "Jay D. Helsel",
        "Gary R. Bertoline", "Cecil Howard Jensen"};

    vector<string> ML_titles{
        "Machine Learning", "Deep Learning",
        "Pattern Recognition and Machine Learning", "Introduction to Machine Learning",
        "Hands-On Machine Learning with Scikit-Learn and TensorFlow", "The Elements of Statistical Learning",
        "Artificial Intelligence: A Modern Approach", "Machine Learning Yearning",
        "Deep Learning with Python", "Reinforcement Learning",
        "Neural Networks and Deep Learning", "Machine Learning for Dummies",
        "Python Machine Learning", "Bayesian Reasoning and Machine Learning",
        "Introduction to Statistical Learning", "Machine Learning in Action",
        "Building Machine Learning Systems with Python", "Practical Machine Learning",
        "Machine Learning: A Probabilistic Perspective", "Machine Learning for Absolute Beginners"};

    vector<string> ML_authors{
        "Tom M. Mitchell", "Ian Goodfellow",
        "Christopher M. Bishop", "Ethem Alpaydin",
        "Aurélien Géron", "Trevor Hastie",
        "Stuart Russell", "Andrew Ng",
        "François Chollet", "Richard S. Sutton",
        "Michael Nielsen", "John Paul Mueller",
        "Sebastian Raschka", "Michael I. Jordan",
        "Gareth James", "Peter Harrington",
        "Willi Richert", "Dipanjan Sarkar",
        "Kevin P. Murphy", "Oliver Theobald"};

    vector<string> Chem_titles{
        "Organic Chemistry", "Inorganic Chemistry",
        "Physical Chemistry", "Analytical Chemistry",
        "Principles of Chemistry", "Biochemistry",
        "Environmental Chemistry", "Chemical Thermodynamics",
        "Advanced Organic Chemistry", "Chemical Kinetics",
        "Quantum Chemistry", "Industrial Chemistry",
        "Medicinal Chemistry", "Polymer Chemistry",
        "Green Chemistry", "Forensic Chemistry",
        "Nuclear Chemistry", "Chemical Engineering",
        "Materials Chemistry", "Chemistry for Dummies"};

    vector<string> Chem_authors{
        "David R. Klein", "J.D. Lee",
        "Peter Atkins", "Gary D. Christian",
        "Nivaldo J. Tro", "Jeremy M. Berg",
        "Stanley E. Manahan", "Ira N. Levine",
        "Francis A. Carey", "Keith J. Laidler",
        "Donald A. McQuarrie", "Allen J. Bard",
        "Thomas N. Sorrell", "Robert J. Ouellette",
        "Paul T. Anastas", "Max M. Houck",
        "John H. Duffus", "Gavin P. Towler",
        "V. Raghavan", "John T. Moore"};

    vector<string> Phy_titles{
        "University Physics", "Concepts of Physics",
        "Fundamentals of Physics", "Modern Physics",
        "Classical Mechanics", "Introduction to Physics",
        "Electricity and Magnetism", "Thermodynamics",
        "Solid State Physics", "Astrophysics",
        "Optics", "Nuclear Physics",
        "Quantum Physics", "Experimental Physics",
        "Mathematical Methods in Physics", "Physics of Semiconductor Devices",
        "Physics for Scientists and Engineers", "Atomic and Molecular Physics",
        "Particle Physics", "Physics Essentials"};

    vector<string> Phy_authors{
        "Hugh D. Young", "H.C. Verma",
        "David Halliday", "R. Eisberg",
        "Herbert Goldstein", "Donald Luttermoser",
        "Edward M. Purcell", "Kenneth S. Krane",
        "Neil W. Ashcroft", "Subrahmanyan Chandrasekhar",
        "Eugene Hecht", "Kenneth S. Krane",
        "David J. Griffiths", "Daniel F. Walls",
        "George B. Arfken", "Simon M. Sze",
        "Paul A. Tipler", "Robert Eisberg",
        "Brian R. Martin", "Paul G. Hewitt"};

    vector<string> Net_titles{
        "Computer Networking: A Top-Down Approach", "Data Communications and Networking",
        "Computer Networks", "TCP/IP Illustrated",
        "Computer Networking Problems and Solutions", "Network Security Essentials",
        "Network Analysis, Architecture, and Design", "Internetworking with TCP/IP",
        "Wireless Communications and Networks", "Routing Protocols and Concepts",
        "Network Programming with TCP/IP", "Network Security: Private Communication in a Public World",
        "High-Performance Browser Networking", "TCP/IP Guide",
        "Computer Networks: A Systems Approach", "Data and Computer Communications",
        "Computer Networking for Beginners", "Networks: An Introduction",
        "Network Warrior", "Networking for Dummies"};

    vector<string> Net_authors{
        "James F. Kurose", "Behrouz A. Forouzan",
        "Andrew S. Tanenbaum", "W. Richard Stevens",
        "Deborah Russell", "William Stallings",
        "James D. McCabe", "Douglas E. Comer",
        "William Stallings", "Rick Graziani",
        "Richard Stevens", "Charlie Kaufman",
        "Ilya Grigorik", "Charles M. Kozierok",
        "Larry L. Peterson", "William Stallings",
        "Jamie Chan", "Mark Newman",
        "Gary A. Donahue", "Doug Lowe"};
    
	public:
		vector<string> borrowed_books;
		void book_categories();
		void display_books(const vector<string>& titles, const vector<string>& authors);
		void borrow_book(const vector<string>& titles, int choice);
		void add_new_book();
};

void Books::borrow_book(const vector<string>& titles, int choice) {
    if (choice > 0 && choice <= titles.size()) {
        borrowed_books.push_back(titles[choice - 1]);
        cout << "You have successfully borrowed \"" << titles[choice - 1] << "\".\n";
    } else {
        cout << "Invalid book choice.Please choose a valid category.\n";
    }
}
void Books::book_categories()
{
    int choice;
    cout << "=============================== \n"
         << "       Books-CATEGORIES         \n"
         << "=============================== \n";
    cout << "1. Data Structure\n"
         << "2. Object Oriented Programming \n"
         << "3. Mathematics \n"
         << "4. Computer Architecture and Organization \n"
         << "5. Engineering Drawing \n"
         << "6. Machine Learning \n"
         << "7. Chemistry \n"
         << "8. Physics \n"
         << "9. Networking \n";
         
    cin >> choice;

    switch (choice) {
        case 1:
            clearScreen();
            display_books(DSA_titles, DSA_authors);
            break;
        case 2:
            clearScreen();
            display_books(OOPs_titles, OOPs_authors);
            break;
        case 3:
            clearScreen();
            display_books(Math_titles, Math_authors);
            break;
        case 4:
            clearScreen();
            display_books(COA_titles, COA_authors);
            break;
        case 5:
            clearScreen();
            display_books(ED_titles, ED_authors);
            break;
        case 6:
            clearScreen();
            display_books(ML_titles, ML_authors);
            break;
        case 7:
            clearScreen();
            display_books(Chem_titles, Chem_authors);
            break;
        case 8:
            clearScreen();
            display_books(Phy_titles, Phy_authors);
            break;
        case 9:
            clearScreen();
            display_books(Net_titles, Net_authors);
            break;
        case 0:
        default:
        	
            cout << "Invalid option. Please choose a valid category." << endl;
            pause(1);
            clearScreen();
            book_categories();
            
    }
    
}

void Books::display_books(const vector<string>& titles, const vector<string>& authors) {
    cout << "=============================== \n"
         << "         Available Books        \n"
         << "=============================== \n";
    for (size_t i = 0; i < titles.size(); ++i) {
        cout << i + 1 << ". " << titles[i] << " by " << authors[i] << endl;
    }
    cout << "\n\n0. <--Back \n" << endl;

    int choice;
    cin >> choice;

    if (choice == 0) {
        clearScreen();
        book_categories();
    } else {
        borrow_book(titles, choice);
    }
}

void Books::add_new_book() {
    int category;
    string title, author;

    cout << "Choose the category to add a new book:\n";
    cout << "1. Data Structure\n"
         << "2. Object Oriented Programming\n"
         << "3. Mathematics\n"
         << "4. Computer Architecture and Organization\n"
         << "5. Engineering Drawing\n"
         << "6. Machine Learning\n"
         << "7. Chemistry\n"
         << "8. Physics\n"
         << "9. Networking\n";
    cin >> category;

    cout << "Enter the title of the book that you want to add: ";
    cin.ignore();
    getline(cin, title);
    cout << "Enter the author of the book: ";
    getline(cin, author);

    switch (category) {
        case 1:
            DSA_titles.push_back(title);
            DSA_authors.push_back(author);
            break;
        case 2:
            OOPs_titles.push_back(title);
            OOPs_authors.push_back(author);
            break;
            case 3:
        Math_titles.push_back(title);
        Math_authors.push_back(author);
        break;
        case 4:
        COA_titles.push_back(title);
		COA_authors.push_back(author); 
		break;
        case 5:
        ED_titles.push_back(title);
		ED_authors.push_back(author);
		break;
        case 6:
        ML_titles.push_back(title);
        ML_authors.push_back(author);
        break;
		case 7: 
        Chem_titles.push_back(title);
        Chem_authors.push_back(author);
        break;
		case 8: 
        Phy_titles.push_back(title);
        Phy_authors.push_back(author);
        break;
		case 9: 
        Net_titles.push_back(title);
        Net_authors.push_back(author);
        break;
        
        default:
            cout << "Invalid category. Please choose a valid category." << endl;
            pause(1);
            add_new_book();
    }

    cout << "Book \"" << title << "\" by " << author << " added successfully to the category.\n";
    pause(1);
    clearScreen();
}

class Login_page:public Books
{
    
    vector<string> passwords{"man1", "san1"};
    string adminUsername = "admin";
    string adminPassword = "admin123";
    vector<string> users{"manjot", "sanket"};
	 string username, password;
	vector<string> names{"manjot", "sanket"};
    vector<string> branches{"CSE", "CSE"};
    vector<int> rollnos{2232117, 2232162};

public:
	
	void usertype();
    void Welcome_page();
    void studentloginPage(const vector<string>& users, const vector<string>& passwords);
    void createAccount(vector<string>& users, vector<string>& passwords);
    void adminLoginPage();
    void student_detail();
    void profile();
    void view_student_details();
    void remove_book_from_user();
    void admin_power();
    
    
};

void Login_page::usertype()
{ int userType;
    cout << "======================================== \n"
         << "           Welcome! E-Library            \n"
         << "======================================== \n"
         << "Are you an Admin or a Student? \n"
         << "1. Admin \n"
         << "2. Student \n";
        cin>>userType;
        if (userType == 1) {
        clearScreen();	
        adminLoginPage();
    } else if (userType == 2) {
        Welcome_page();}
        else {
        cout << "Invalid option.Please choose a valid category. " << endl;
        pause(2);
        clearScreen();
        usertype();
    }
	
}

void Login_page::adminLoginPage() {
    
    cout << "======================================== \n"
         << "     Welcome to the Admin Login Page     \n"
         << "======================================== \n";
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (username == adminUsername && password == adminPassword) {
        cout << "Admin login successful! Welcome, " << username << "." << endl;
        pause(0.5);
        admin_power();
        }
	else {cout << "Invalid admin username or password. Please try again." << endl;
	pause(2);
	clearScreen();
		adminLoginPage();
        
    }
}

void Login_page::admin_power()
{
clearScreen();
        cout<<"1.View all Student \n"
            <<"2.View all books \n"
            <<"3.Remove books \n"
            <<"4.Add New book \n\n"
			<<"5.EXIT \n";
        int choice;
        cin>>choice;
        switch (choice) {
            case 1:
                clearScreen();
                view_student_details();
                break;
            case 2:clearScreen();
			   book_categories();
           		break;
            
           case 3:clearScreen();
           	    remove_book_from_user();
           	    break;
            case 4:
                clearScreen();
                add_new_book();
           break;
            default:
                cout << "Invalid option. Please choose a valid category." << endl;
                pause(1);
                clearScreen();
                admin_power();
        }
}

void Login_page::view_student_details() {
    clearScreen();
    cout << "======================================== \n"
         << "          All Student Details           \n"
         << "======================================== \n";

    for (size_t i = 0; i < users.size(); ++i) {
        cout << "Name: " << names[i] << "\n"
             << "Branch: " << branches[i] << "\n"
             << "Roll Number: " << rollnos[i] << "\n"
			 <<"username: " <<users[i] <<"\n"
			 <<"password:" <<passwords[i] <<"\n\n";
    }

    cout << "0. <--Back \n";
    int choice;
    cin >> choice;
    if (choice == 0) {
        clearScreen();
        admin_power(); 
    } else {
        cout << "Invalid choice. Please press 0 to go Back." << endl;
        clearScreen();
        view_student_details();
    }
}

void Login_page::remove_book_from_user() {
    clearScreen();
    cout << "======================================== \n"
         << "          All Student Details           \n"
         << "======================================== \n";

    for (size_t i = 0; i < users.size(); ++i) {
        cout << "Name: " << names[i] << "\n"
             << "Branch: " << branches[i] << "\n"
             << "Roll Number: " << rollnos[i] << "\n\n";
    }
    cout << "Enter student username to remove book from: ";
     

    cin >> username;

    auto userIt = find(users.begin(), users.end(), username);
    if (userIt != users.end()) {
        auto pos = distance(users.begin(), userIt);

        cout << "Student " << username << "'s borrowed books: \n";
        for (const auto& book : borrowed_books) {
            cout << book << ", ";
        }
        cout << "\n\nEnter the book index to remove (1-" << borrowed_books.size() << "): ";
        int bookIndex;
        cin >> bookIndex;

        if (bookIndex > 0 && bookIndex <= borrowed_books.size()) {
            borrowed_books.erase(borrowed_books.begin() + bookIndex - 1);
            cout << "Book removed successfully.\n";
        } else {
            cout << "Invalid book index. Please choose a valid category.\n";
        }
    } else {
        cout << "Student not found.\n";
    }

    cout << "Press any key to go back to admin login page.\n";
    fflush(stdin);
    cin.get();
    clearScreen();
    remove_book_from_user();  
}

void Login_page::student_detail()
{
	auto userIt = find(users.begin(), users.end(), username);
	auto pos=distance(users.begin(), userIt);
	
	cout<<"Name : "<<names[pos]<<"\n"
	    <<"Branch : "<<branches[pos]<<"\n"
	    <<"Roll.no : "<<rollnos[pos]<<"\n\n"
	    <<"Books : ";
		
	    for (const auto& book : borrowed_books) {
        cout << book << ", ";
         }
       cout<<"\n0.<--Back \n";
        int choice;
        cin>>choice;
        if(choice==0)
        {clearScreen();
        	profile();
		}
		else
		{
			cout<<"Invalid choice , Please prees 0 to go Back"<<endl;
			pause(1);
			clearScreen();
			student_detail();
		}
   
    
}

void Login_page::Welcome_page()
{
        clearScreen();
        int choice;
        cout << "======================================== \n"
             << "           Welcome! E-Library            \n"
             << "======================================== \n"
             << "Please choose an option: \n"
             << "1. Login \n"
             << "2. Create Account \n"
             << "3. Exit \n";
        cin >> choice;

        switch (choice) {
            case 1:
                clearScreen();
                studentloginPage(users, passwords);
                break;
            case 2:
                clearScreen();
                createAccount(users, passwords);
                break;
            case 3:
                exit(0);
                break;
            default:
                cout << "Invalid option.Please choose a valid category." << endl;
                pause(1);
                clearScreen();
                Welcome_page();
                
        }
   
}

void Login_page::studentloginPage(const vector<string>& users, const vector<string>& passwords) {
    
    cout << "========================================== \n"
         << "    Welcome to the Student Login Page      \n"
         << "========================================== \n";
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    auto userIt = find(users.begin(), users.end(), username);
    auto passIt = find(passwords.begin(), passwords.end(), password);

    if (userIt != users.end() && passIt != passwords.end() && distance(users.begin(), userIt) == distance(passwords.begin(), passIt)) {
        cout << "Login successful! Welcome, " << username << "." << endl;
        pause(3);
         clearScreen();
         profile();
         }
         else { 
        cout << "Invalid admin username or password. Please try again." << endl;
        pause(2);
        clearScreen();
         	studentloginPage(users, passwords);
    }
}

void Login_page::profile()
{
	int choice;
        cout << "======================================== \n"
             << "           Welcome! E-Library            \n"
             << "======================================== \n"
             << "Please choose an option: \n"
             << "1. profile \n"
             << "2. book_categories \n"
             << "3. Exit \n";
        cin >> choice;
         switch (choice) {
            case 1:
                clearScreen();
                student_detail();
                break;
            case 2:
                clearScreen();
                book_categories();
                cout << "Do you want to choose one more book? (y/n): ";
                
                
         char cont;
    cin >> cont;
    if (cont == 'y'|| 'Y' ) {
    	clearScreen();
        book_categories();
        pause(1);
        clearScreen();
        profile();
    } 
	else if(cont == 'N'||'n') {
		clearScreen();
         profile();
    }
    else
    {
    	 cout << "Invalid option."<<endl;
	}
            break;
            case 3:
                exit(0);
                break;
            default:
                cout << "Invalid option.Please choose a valid category. " << endl;
                pause(1);
                clearScreen();
                profile();
        }
}

void Login_page::createAccount(vector<string>& users, vector<string>& passwords) {
    string name, branch;
    int rollNo;

    cout << "==================================== \n"
         << "       Create a New Account          \n"
         << "==================================== \n";
    cout << "Enter your name: ";
    fflush(stdin); 
    getline(cin, name);
    cout << "Enter your branch: ";
    fflush(stdin);
    getline(cin, branch);
    cout << "Enter your roll number: ";
    cin >> rollNo;
    cout << "Enter a new username: ";
    cin >> username;
    cout << "Enter a new password: ";
    cin >> password;

    names.push_back(name);
    branches.push_back(branch);
    rollnos.push_back(rollNo);
    users.push_back(username);
    passwords.push_back(password);

    clearScreen();
    cout << "Account created successfully! You can now log in with your new credentials." << endl;

    cout << "\n Going back to Login Page \n";

    pause(2);
    clearScreen();
    Welcome_page();
}

int main() {
    Login_page l;
    l.usertype();
    return 0;
}

