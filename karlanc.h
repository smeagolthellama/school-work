#ifndef KARLANC_H_INCLUDED
#define KARLANC_H_INCLUDED

///size of a char*
#define CHAR_STAR_SIZE 256

///a karakterlanc hosszat kuldi vissza.
///
int hossz(const char* t)
{
	int i;

	for(i = 0; t[i] != 0; i++);

	return i;
}

///torol a t-bol [pos]...[pos+num]
///
bool torles(char*t, const int pos, const int num)
{
	/*if(pos + num >= hossz(t)) {
		return 0;
	}*/

	int i = 0;

	for(i = pos; i < hossz(t); i++) {
		t[i] = t[i + num];
	}

	return true;
}


///beszurja a t-be az in-t, a pos-tol kezdve.
///
void beszur(char* t, const char* in, const int pos)
{
	int i;
	int h1 = hossz(t);
	int h2 = hossz(in);

	for(i = h1 + pos; i >= pos + h2; i--) {
		t[i] = t[i - h2];
	}

	for(i = pos; i < h2 + pos; i++) {
		t[i] = in[i - pos];
	}
}

///keres egy karaktert.
///
int kereschar(const char* t1, const char c)
{
	int i;

	for(i = 0; i < hossz(t1); i++) {
		if(t1[i] == c) {
			return i;
		}
	}

	return -1;
}

int keres(char* t1, const char* t2)
{
	int j = 0, i;
	i = kereschar(t1, t2[j]);

	for(j = 0; j < hossz(t2) && i < hossz(t1);) {
		if(kereschar(t1 + i, t2[j + 1]) != i + 1) {
			i++;
			j++;
		} else {
			j = 0;
			i = kereschar(t1 + i, t2[j]);
		}
	}

	if(j == hossz(t2)) {
		return (i - j);
	} else {
		return -1;
	}
}

bool isvowel(const char c){
    return (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U');
}

///bemasolja a t1be a t2t
///
void atmasol(char * t1,const char * t2){
	int h;
	int i=0;
	h=hossz(t2);
	for(i=0;i<h;i++){
		t1[i]=t2[i];
	}
}
///bemasolja a t1be a t2 elso h karakteret.
void atmasol(char * t1,const char * t2,int h){
	int i=0;
	for(i=0;i<h;i++){
		t1[i]=t2[i];
	}
}
#endif // KARLANC_H_INCLUDED
