
# include "phonebook.hpp" 

Contact::phoneBook()
{
}

Contact::~phoneBook()
{
}

void phonebook.add_contact()
{
    std::string input;
    Contact     *phonebook;

    if (Contact::getNb() == 8)
        Contact::setNb(0);
    
    phonebook = &this->_phonebook[Contact::getNb()];	
	phonebook->setFirstName(ask_input("First Name"));
    phonebook->setLastName(ask_input("Last Name"));
	phonebook->setNickname(ask_input("Nickname"));
    phonebook->setPhonenumber(ask_input("Phone Number"));
	phonebook->setDarkestSecret(ask_input("Darkest Secret"));
	Contact::setNb(Contact::getNb() + 1);
	return ;
}

/*void phonebook.search_contact()
{

}*/
