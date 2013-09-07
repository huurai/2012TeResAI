/*メンバ変数actを書き換えてAIの次の行動を決める関数です。*/
#include "Data.h"


Action next_Ai(int view[2*VISIBLE+1][2*VISIBLE+1]){
	int r;
	int cx=VISIBLE,cy=VISIBLE;

	r=GetRand(4);
	switch(r%4){
	case 0:
		if(view[cx][cy-1]!=1)
			return N;
		break;
	case 1:
		if(view[cx+1][cy]!=1)
			return E;
		break;
	case 2:
		if(view[cx][cy+1]!=1)
			return S;
		break;
	case 3:
		if(view[cx-1][cy]!=1)
			return W;
		break;
	}
}