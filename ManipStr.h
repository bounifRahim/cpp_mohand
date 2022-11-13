#include <string>
#include <vector>
using namespace std;

class ManipStr {
    private :
        // Attrbiuts: variables de la classe.
        // Encapsulation : c'est le faite mettre tout les attributs 
        //  de la classe comme étant private.
        int m_size;
        string m_text;
        vector<char> m_exlures;
    public : 
        // Constructor :
        ManipStr() {    // construtor par défaut
            this->m_size = 0;
            this->m_text = "";
            this->m_exlures = vector<char>();
        }

        ManipStr(string text, vector<char> exlures) {    // construtor par défaut
            this->m_size = text.size();
            this->m_text = text;
            this->m_exlures = exlures;
        }

        // Méthodes : Les fonctions de la classe.
        
        // getter :
        string getText() {
            return this->m_text;
        }
        
        int getSize() {
            return this->m_size;
        }
        
        vector<char> getExlures() {
            return this->m_exlures;
        }
        // setter : 
        void setText(string text) {
            this->m_text = text;
        }
        
        void setSize(int size) {
            this->m_size = size;
        }
        
        void setExlures(vector<char> exlure) {
            this->m_exlures = exlure;
        }

        // autres méthodes.
        void removeChar() {
            string result;
            for (int i=0; i< this->m_text.length(); i++) {
                bool isExiste = false;
                for (int j = 0; j < this->m_exlures.size(); j++) {
                    if (this->m_exlures.at(j) == this->m_text.at(i)) {
                        isExiste = true;
                        break;
                    }
                }
                if (!isExiste) {
                    result.push_back(this->m_text.at(i));
                }
            }
            this->m_text = result;
            this->m_size = this->m_text.size();
        }
};