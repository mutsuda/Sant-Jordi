#include <vector>
#include <iostream>
#include <stdlib.h>
#include <sstream>
using namespace std;


template <typename T>

/*Classe extreta del fitxer ada.hh*/
class matrix {
	
    int r,c;
    vector<vector<T> > t;
	
public:
	
    matrix () :
	r(0), c(0) {  }
    
    matrix (int rows, int cols, T init=T()) :
	r(rows), c(cols), t(vector<vector<T> >(r, vector<T>(c,init))) {  }
    
    int rows () const { 
        return r; 
    }
    
    int cols () const { 
        return c; 
    }
	
    vector<T>& operator[] (int i) {
        return t[i];
    }
	
    const vector<T>& operator[] (int i) const {
        return t[i];
    }
	
    
    friend ostream& operator<< (ostream& s, matrix<T> m) {
        for (int j=0; j<m.c; ++j) {
            for (int i=0; i<m.r; ++i) {
                s << m.t[i][j] << " ";
            }
            s << endl;
        }
        return s;
    }
};

string laberint(int number)
{
	stringstream ss;
	ss << number;
	return ss.str();
}

typedef matrix<string> ferotge;
int cavall = 10;



/*La*/ class/*ica*/ Llegenda { /*de Sant Jordi autocontinguda recursiva*/
	
	
/*Diuen que assolava els voltants de la FIB*/			    
/*un*/ferotge monstre;/*que poseia les facultats*/
/*d'*/int/*entar*/ suspendre;/*els alumnes*/
int/*eressats e*/n;/*aprovar.*/                  
/*Els alumnes, */int/*el·ligentment, van pensar que*/el,/*podrien contenir*/un/*a mica*/;              
/*si cada setmana, un bene*/bool/*estudiant oferia el seu*/ aprovat;            
/*Un bon dia, el*/ferotge drac;/*va demanar l'aprovat de l'unica noia de la FIB*/
/*Tots els nois es van oposar a la peticio del*/    
/*cap d'o*/void/*e monstruos i van*/provar (/*d'*/int/*ervenir-hi.*/
/*No van faltar*/pas,/*els qui*/ int/*ent*/a/*ven evitar-ho*/,/*ofer*/int/*-se per substituir la*/j/*ove*/){
/*Nomes hi havia una persona pero, que podia derrotar el monstre: Sant Jordi*/	
/*Era d*/if/*icil deixar la*/(not/*a en*/aprovat /*, a Sant Jordi li feia m*/and/*r*/a>=0 /*de g*/and/*ul*/
/*pero no pens*/a</*a e*/n /*ab*/and/*onar una*/j/*o*/>=/*e*/0 and/*alusa*/ 
/*i a un*/ j/*o*/</*e*/n/*t*/ /*t*/and/*edicat, davant del*/ monstre[a/*famat i*/][j/*uganer*/]==".") {
/*El bot*/if/*ler Jordi pero, no tenia*/((pas+1)<cavall)/*amb que combatre el*/monstre/*gens*/[a][j/*ocat*/]="0"
/*doncs aquest s'havia perdut en un*/+laberint(/*no feia*/pas+1/*gaire*/);
/*El cavall menjador d'herba m*/else/*ra havia estat capturat pel*/monstre[/*geg*/a/*nt i*/][j/*acent*/]=/*al*/laberint(pas/*tador*/+1);
/*Sant Jordi va demanar als estudiants, un algorisme*/recursiu(/*pel*/pas/*tador d'herba*/+1,a,j/*udar*/);
/*i d'aquesta manera al*/monstre[a/*niquilar*/][/*i la*/j/*ove aprovar*/] = ".";
/*El programa havia de tenir 191 linies, i donat un tauler d'entrada, i la posicio del cavall, determinar el cami per poder
 passar per totes les caselles, sense repetir-ne cap. D'aquesta manera podria trencar la malediccio del laberint.*/}}


	/*L'algorisme recursiu que van dissenyar els alumnes va ser aquest*/	
    void recursiu (int pas, int x, int y) 
	{
        /*Per cada pas del cavall, van mirar si aquest ja havia fet tots els passos*/
		if (pas==n*n-suspendre) 
		{ 
            /*Si ja havia aconseguit fer els passos, l'aprovat era realitat*/
			aprovat = true;
			
			/*I es constatava una obvietat, que el drac era un monstre*/
			drac = monstre;
        } 
		/*Si no, el cavall seguia provant, de tantes maneres com podia*/
		else 
		{
			provar(pas,x+2,y-1); provar(pas,x+2,y+1);
            provar(pas,x+1,y+2); provar(pas,x-1,y+2);
            provar(pas,x-2,y+1); provar(pas,x-2,y-1);
            provar(pas,x-1,y-2); provar(pas,x+1,y-2);
		}  
	}
	
	
/*Pero */public:/*no us avanceu*/
/*La*/ Llegenda (/*d'*/int/*e*/n/*tar derrotar el*/, ferotge monstre, /*no es pas succ*/int a, 
/*i no ens podem deixar res al t*/int er, /*sobre el laber*/int /*malef*/i/*c*/) {

		this/*cret*/->/*havia ser Sant Jordi per evitar l'alumna*/suspendre=i/*no aprovar*/;
		this/*tret*/->/*havia d'estar el */monstre /*per no veure el mata*/=monstre/*s*/;
		/*malgrat tot*/
		this/*tret*/->n/*o*/ = /*a*/n/*ava el drac i*/;
		this/*cret*/->el/*l no v*/=a/*ser perque aquest va ser el resultat, */;
		this/*putat*/->un /*enfrontament que hi va hav*/=er;
        
		aprovat = false;
	
	
		this/*suasiu pero el*/->monstre[/*p*/el/*ut no va ser, tot i que va*/][/*sumar un p*/un/*t*/] = "01";
		
		
/*Sant Jordi va intentar executar l'algorisme*/recursiu(/*per salvar*/1,el,/*seu cavall del prof*/un/*d laberint*/);}
    
    
	/*Mira Sant Jordi, t'hem fet dues funcions auxiliars!*/
	bool el_cavaller () 
	{ 
        return aprovat; 
    }
    
	ferotge en_un_tres_i_no_res() 
	{
	    return drac;
	}
};




/*Sant Jordi va */int/*entar executar el codi fet per la*/main/*ada*/ () {
/*pero l'*/int/*e*/n/*t va*/,f,r/*acassar*/,j/*a que faltava el programa*/,principal=0;
/*mentre el*/ferotge monstre;/*estava despistat*/
cin/*c dels*/ >> n/*ois van aprofitar*/;
/*per re*/string/*ir*/ la/* seva visio*/;
/*el*/monstre = ferotge(n/*o es va ado*/,n/*ar*/);
/*que el grup s'estava en*/for/*t*/(int i /*ben aviat van tr*/=0/*bar el programa*/;/*pr*/i<n/*c*/;i/*pal*/++){
/*Un cop el codi sencer van acabar, a Sant Jordi li'l van entregar*/
/*I gracies al programa el seu cavall el cami de sortida va trobar*/
/*Al·lu*/cin/*ant va ser*/ >> la /*facilitat amb que Sant Jordi*/;
/*un cop recuperat el boca*/for/*t cavall*/ (j/*a*/ = /*n*/0; /*semblava necessitar a*/j/*uda de */<n/*ingu*/; j++){
/*Sant Jordi va matar el*/monstre[i][/*els*/j/*oves ben contents van quedar, de*/]=la[j/*ove noia recuperar*/];
/*Sobre una cat*/if/*a el*/(monstre[i/*nert*/][/*van fer*/j/*aure i de la seva pell va sortir una gota de sang*/]=="*") {
/*La sang del*/monstre[/*flu*/i/*a*/][/*i ra*/j/*ava sense parar*/]="**";
/*I la seva sang va passar a ser el punt d'atencio*/principal++;}}}
/*Poca estona mes tard, tothom va poder veure el naixement d'una fas*/cin/*ant*/ >> f/*lor de*/ >> r/*osa*/;
	

	
    
/*I aixi acaba la*/Llegenda/*de*/Sant_Jordi(/*e*/n,/*que un*/monstre, f/*erotge*/-1, /*c*/r/*uel i*/-1, principal/*ment dolent*/);
/*Va intentar suspendre l'unica noia de la FIB*/
/*i gracies a la grat*/if/*icant ajuda de*/(Sant_Jordi.el_cavaller()) {
/*i la inestimable ajuda dels alumnes, el temible*/ monstre = /*va poder ser despatxat per*/Sant_Jordi.en_un_tres_i_no_res();
		
		// Mira Sant Jordi, aquesta part del codi escriu la solucio amb els espais i els saltets que ens vas demanar!
		for(int i=0;i<n;i++)
		{
			if(i!=0) cout << endl;
			for (int j=0; j<n; j++)
			{
				cout << monstre[i][j];
				if (j!=(n-1)) cout << " ";
			}
			if (i==(n-1)) cout << endl;		
			}
	}
	else cout << "sense solucio" << endl;
	
}

/*I per si no us n'heu adonat, precisament aquest petit programa que heu anat seguint, 
 va ser el que va ajudar a Sant Jordi a alliberar el seu cavall, derrotar el drac, i salvar l'aprovat de l'alumna.
 I us preguntareu: Com es possible que al programa que se li va entregar a Sant Jordi s'hi expliqui la historia sobre el propi programa?
 L'ou o la gallina?
 */