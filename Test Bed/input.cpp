/*
Audio play by Kevin Forshee 11/2
Input by Trevor Simmons 11/2
update: had to change from array to individual switch case bc of syntax TEXT
input by :

*/


#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include<string>
#include"MMSystem.h"
#include <conio.h>

#pragma comment(lib, "winmm.lib")


using namespace std;

//ascii codes for keys
#define KEY_Q 113
#define KEY_W 119
#define KEY_E 101
#define KEY_R 114
#define KEY_T 116
#define KEY_Y 121
#define KEY_U 117
#define KEY_I 105
#define KEY_O 111
#define KEY_P 112
#define KEY_A 97
#define KEY_S 115
#define KEY_D 100
#define KEY_F 102
#define KEY_G 103
#define KEY_H 104
#define KEY_J 106
#define KEY_K 107
#define KEY_L 108
#define KEY_Z 122
#define KEY_X 120
#define KEY_C 99
#define KEY_V 118
#define KEY_B 98

void wav_player(int i) {
	string key_files[24] = { "key01.wav", "key02.wav", "key03.wav", "key04.wav", "key05.wav", "key06.wav", "key07.wav", "key08.wav", "key09.wav", "key10.wav", "key11.wav", "key12.wav", "key13.wav", "key14.wav", "key15.wav", "key16.wav", "key17.wav", "key18.wav", "key19.wav", "key20.wav", "key21.wav", "key22.wav", "key23.wav", "key24.wav" };

	//PlaySound(TEXT(key_files[i]), NULL, SND_SYNC);

}

int main() {
	char key = _getch(); //getch gets the key 
	int value = key;
	cout << "Welcome to the piano, press any key from Q-B to play a note! " << endl;
	while (true) {


		//When you press assigned key, it plays the assigned case
		switch (_getch()) {

		case KEY_Q://1
			cout << "you pressed Q! \n";
			PlaySound(TEXT("key01.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(1);

		case KEY_W://2
			cout << "you pressed W!  \n";
			PlaySound(TEXT("key02.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(2);

		case KEY_E://3
			cout << "you pressed E!  \n";
			PlaySound(TEXT("key03.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(3);

		case KEY_R://4
			cout << "you pressed R!  \n";
			PlaySound(TEXT("key04.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(4);

		case KEY_T://5
			cout << "you pressed T!  \n";
			PlaySound(TEXT("key05.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(5);

		case KEY_Y://6
			cout << "you pressed Y!  \n";
			PlaySound(TEXT("key06.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(6);

		case KEY_U://7
			cout << "you pressed U!  \n";
			PlaySound(TEXT("key07.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(7);

		case KEY_I://8
			cout << "you pressed I!  \n";
			PlaySound(TEXT("key08.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(8);

		case KEY_O://9
			cout << "you pressed O!  \n";
			PlaySound(TEXT("key09.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(9);

		case KEY_P://10
			cout << "you pressed P!  \n";
			PlaySound(TEXT("key10.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(10);

		case KEY_A://11
			cout << "you pressed A!  \n";
			PlaySound(TEXT("key11.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(11);

		case KEY_S://12
			cout << "you pressed S!  \n";
			PlaySound(TEXT("key12.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(12);

		case KEY_D://13
			cout << "you pressed D!  \n";
			PlaySound(TEXT("key13.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(13);

		case KEY_F://14
			cout << "you pressed F!  \n";
			PlaySound(TEXT("key14.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(14);

		case KEY_G://15
			cout << "you pressed G!  \n";
			PlaySound(TEXT("key15.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(15);

		case KEY_H://16
			cout << "you pressed H!  \n";
			PlaySound(TEXT("key16.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(16);

		case KEY_J://17
			cout << "you pressed J!  \n";
			PlaySound(TEXT("key17.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(17);

		case KEY_K://18
			cout << "you pressed K!  \n";
			PlaySound(TEXT("key18.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(18);

		case KEY_L://19
			cout << "you pressed L!  \n";
			PlaySound(TEXT("key19.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(19);

		case KEY_Z://20
			cout << "you pressed Z!  \n";
			PlaySound(TEXT("key20.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(20);

		case KEY_X://21
			cout << "you pressed X!  \n";
			PlaySound(TEXT("key21.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(21);

		case KEY_C://22
			cout << "you pressed C!  \n";
			PlaySound(TEXT("key22.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(22);

		case KEY_V://23
			cout << "you pressed V!  \n";
			PlaySound(TEXT("key23.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(23);

		case KEY_B://24
			cout << "you pressed B!  \n";
			PlaySound(TEXT("key24.wav"), NULL, SND_SYNC);
			system("pause");
			break;
			//wav_player(24);

		}

		key = _getch();
		value = key;
	}
}