/*
	PowerTTS_M Header

	Copyright (C) 2001-2005 HCI Lab
*/

#define	MAX_SPEAKER		20			// �ִ� ȭ�ڼ�

#define	SAMPLE_8K		8000
#define SAMPLE_16K		16000

#define KO_KR		0
#define EN_US		1
#define ZH_CN		2
#define JA_JP		3

#define	E_PTTS_FILEOPEN			-1	// FILE OPEN ����
#define	E_PTTS_LACKOFMEMORY		-2	// Working Memory ����
#define E_PTTS_TTSTHREADFAIL	-3	// TTS Thread Generation ����
#define E_PTTS_DATEEXPIRED		-4	// ��� ������ ����
#define E_PTTS_ENGINELOADFAIL   -5  // ���� �ε� ����
#define E_PTTS_INVALIDPARAM		-6	// invalid parameter ���
#define E_PTTS_INVALIDSPEAKER	-7	// invalid speaker ���

#define E_PTTS_INVALIDCHANNEL	-8	// ��ȿ���� ���� ä����
#define E_PTTS_NOMORECHANNEL	-9	// ���ä���ʰ�
#define E_PTTS_NOENGINELOAD		-10	// ������ �ε�Ǿ� ���� ����
#define E_PTTS_OUTOFRANGE		-11	// Specified argument is out of range
#define E_PTTS_NOTSUPPORTED		-12	// �������� �ʴ� ���

#define E_PTTS_CHARSETMISMATCH	-21	// Character Set�� ���� �ʴ� ���
#define E_PTTS_VXMLTAGERROR		-22	// VXML TAG�� �߸��� ���

#define E_PTTS_FORMATMISMATCH	-31	// AudioMixing�� ���Ǵ� �� ���� ������ Format�� ���� �ٸ� ���

#define E_PTTS_LICENSE_KEY_NOT_FOUND		-101
#define E_PTTS_LICENSE_DATE_EXPIRED			-102
#define E_PTTS_LICENSE_INVALID_SYSTEM		-103
#define E_PTTS_LICENSE_INVALID_KEY			-104

#define E_PTTS_LICENSE_OEMKEY_NOT_FOUND		-201
#define E_PTTS_LICENSE_INVALID_OEMKEY		-202

#define CODING_PCM				0	// TextToFile()�� Format
#define CODING_LINEAR8			1
#define CODING_MULAW			2
#define CODING_ALAW				3
#define CODING_VOX				4
#define CODING_ADPCM			5	// 4-bit CCITT g.721 ADPCM
#define CODING_WAVE				6

#define PTTS_FORMAT_WAV		    0	// TextToFileEx()�� Format
#define PTTS_FORMAT_AU			1
#define PTTS_FORMAT_PCM			2

#define PTTS_ENCODING_LINEAR16	0	// TextToFileEx()�� Encoding 
#define PTTS_ENCODING_LINEAR8	1	 
#define PTTS_ENCODING_MULAW		2
#define PTTS_ENCODING_ALAW		3
#define PTTS_ENCODING_VOX		4
#define PTTS_ENCODING_ADPCM		5	// 4-bit CCITT g.721 ADPCM

#define	PTTS_PLAY_START			1		// SOUND CARD API ����
#define	PTTS_PLAY_PAUSE			2		// �ռ��Ⱑ ����ڿ��� uUsrMsg �� �Բ� wParam �� �ִ� ����
#define PTTS_PLAY_RESTART		3
#define PTTS_PLAY_END			4
#define	PTTS_PLAY_ERROR			-1

#define PTTS_EFFECT_DATA_PCM            0      // ȿ���� ����Ÿ ����
#define PTTS_EFFECT_DATA_ULAW           1
#define PTTS_EFFECT_DATA_ALAW           2
#define PTTS_EFFECT_DATA_ENCPCM         3

#define PTTS_EFFECT_TAG_READ_NO         0      // ȿ���� Tag�� �߸� ����� ���, �б� ����
#define PTTS_EFFECT_TAG_READ_YES        1

#define	E_PTTS_USRDERR_LOAD			11	// �̹� ������ �ε�Ǿ� �ִ� ���
#define	E_PTTS_USRDERR_FILEOPEN		12	// ����� ������ Open ���� �ʴ� ���
#define	E_PTTS_USRDERR_MEMALLOC		13	// �޸𸮰� ���� ���
#define	E_PTTS_USRDERR_INVALIDPARA	14	// �Լ��� parameter ���� ���������� ���� ���
#define	E_PTTS_USRDERR_ENTRYNUM		15	// ��� Entry�� = MAX_USRDICT�� �Ѵ� ���
#define	E_PTTS_USRDERR_BADFORMAT	16	// '{���ܾ��Ʈ} {���ܾ��Ʈ}' ������ �ƴ� ���
#define	E_PTTS_USRDERR_BADORGWORD1	17	// ���ܾ��Ʈ�� USRDICT_WORDLIST_LEN(128)�� ���̸� �Ѵ� ���
#define	E_PTTS_USRDERR_BADORGWORD2	18	// ���ܾ��Ʈ�� �ܾ USRDICT_WORD_LEN(40)�� ���̸� �Ѵ� ���
#define	E_PTTS_USRDERR_BADORGWORD3	19	// ���ܾ��Ʈ�� �ٸ� ������ �ִ� ���
#define	E_PTTS_USRDERR_BADNEWWORD1	20	// ���ܾ��Ʈ�� USRDICT_WORDLIST_LEN(128)�� ���̸� �Ѵ� ���
#define	E_PTTS_USRDERR_BADNEWWORD2	21	// ���ܾ��Ʈ�� �ܾ USRDICT_WORD_LEN(40)�� ���̸� �Ѵ� ���
#define	E_PTTS_USRDERR_BADNEWWORD3	22	// ���ܾ��Ʈ�� �ٸ� ������ �ִ� ���

#define PHONE_TYPE_DEFAULT	0	// ������-������ �϶�
#define PHONE_TYPE_CVC		1	// ������-�������� �϶�, ��������
#define PHONE_TYPE_CV		2
#define PHONE_TYPE_VC		3
#define PHONE_TYPE_V		4
#define PHONE_TYPE_PAUSE	5

#define PTTS_KO_KR				0
#define PTTS_EN_US				1
#define PTTS_ZH_CN				2
#define PTTS_JA_JP				3

typedef struct tagLIPSYNCINFO {
    int     phType;				// �� Ÿ��
	char	phone[3];			// ��
	char	bComplete;			// �Ϸ� ���� : OutBufSize != 0 �϶�, [1]complete [0]not-complete (default=1)
	int		nStPos;				// ���� ��ġ : sample ����
	int		nDur;				// �� ����   : sample ����
} LIPSYNCINFO;

//==>
/* Word Sync. 2008-09-04 by hslee */
typedef struct tagWORDSYNCINFO {
	int		nTextPos_Start;
	int		nTextPos_End;
	int		nAudioPos_Start;
	int		nAudioPos_End;
} WORDSYNCINFO;

typedef struct tagMARKINFO {
    int          nTotalPhoneNum;    // ��ü �� ��
    int          nCurrentPhoneNum;  // ���� �� ��
    LIPSYNCINFO  *LipSyncData;      // ����ũ ����
//    HLIGHTINFO   HLight;            // Highlight ����
	WORDSYNCINFO	*WordSync;		// WordSync ����
} MARKINFO;

//==>
/* Word Sync. 2008-09-11 by hslee */

/* Phoneme Information */
typedef struct tagPHONEID
{
    short   PhoneID;			// ��
    int     nStPos;				// ���� ��ġ : msec ����
    int     nDur;				// �� ����   : msec ����
	char	chStress;			// stress ���� ; 0, 1
} PHONEID;

/* Viseme Infomation */
typedef struct tagVISEMES
{
    short   VisemeID;			// ��
    int     nStPos;				// ���� ��ġ : msec ���� (������)
    int     nDur;				// �� ����   : msec ����
	char	chStress;			// stress ���� ; 0, 1, -1(�ǹ̾���)
} VISEMES;

typedef struct tagVOICESTATUS
{
	ULONG	ulWordPos;			// Character offset of the beginning of the word being synthesized
	ULONG	ulWordLen;			// Character length of the word in the current input stream being synthesized
	ULONG	ulSentPos;			// Character offset of the beginning of the sentence being synthesized
	ULONG	ulSentLen;			// Character length of the sentence in the current input stream being synthesized
	LONG	lBookmarkID;		// ���� �����ȵ�
	UINT	uIPhonemeNum;		// Word���� Phoneme�� ����		
	PHONEID	*PhonemeID;			// Phoneme ���� (��������)
	VISEMES	*VisemeID;			// Viseme ���� 
	DWORD	dwReserved1;
	DWORD	dwReserved2;
} VOICESTATUS;

typedef struct tagSYNRES {	// modified at 2008-09-04 by hslee
	unsigned int    NumBytes;
	void            *pData;
	short           Status;
	VOICESTATUS		*pVoiceStatus;
	MARKINFO        *pMarkInfo;
	void			*pReserve1;
	void			*pReserve2;
} SYNRES;

//<== add at 2008-09-11 by hslee

typedef struct {
	char	szProduct[40];
	char	szVersion[40];
	char	szLanguage[20];
	char	chCodingScheme;
	char	szAPIVersion[40];
} PowerTTSENGINEINFO;

typedef struct {
	int		nSpeakerID;
	char	szSpeaker[20];
	char	szLanguage[20];
	int		nSamplingRate;
} PowerTTSDBINFO;

typedef struct tagFILTERBUF 
{
	short sSource[11];
	float fFltBuf[11];
} FILTERBUF;

#ifdef __cplusplus
extern "C" {
#endif

/*===========================================================================*/
/* Basic API */
int	 __stdcall PTTS_Initialize();
void __stdcall PTTS_UnInitialize();

int  __stdcall PTTS_LoadEngine(int Language, char *DbDir, int bLoadInMemory);
void __stdcall PTTS_UnLoadEngine(int Language);

void* __stdcall PTTS_CreateThread(void *pInParam, int (*CallBack)(void *pInParam, SYNRES *pResult), int Language, int Speaker);
void __stdcall PTTS_DeleteThread(void *pTTSThread);
int  __stdcall PTTS_TextToSpeech(void *pTTSThread, char *Text, int bTaggedText);
int  __stdcall PTTS_TextToPcmBuf(void *pTTSThread, char *Text, int bTaggedText, int OutBufSize);
int  __stdcall PTTS_StopTextToSpeech(void *pTTSThread);
int  __stdcall PTTS_ChangeAttr(void *pTTSThread, char *tagString);

/* Extension Functions */
int __stdcall PTTS_GetPitchDefault(int Language, int speaker, int *Min, int *Max);
int __stdcall PTTS_GetVolumeDefault(int Language, int *Min, int *Max);
int __stdcall PTTS_GetSpeedDefault(int Language, int *Min, int *Max);
int __stdcall PTTS_ChangeSpeaker(void *pTTSThread, int Speaker);
void __stdcall PTTS_GetEngineInfo(int Language, PowerTTSENGINEINFO *st_TTSEngineInfo);
int __stdcall PTTS_SetSpeed(void *pTTSThread, int Speed);
int __stdcall PTTS_SetVolume(void *pTTSThread, int Volume);
int	__stdcall PTTS_SetPitch(void *pTTSThread, int Pitch);

/* Extension Functions 2 for New Server*/
void __stdcall PTTS_GetChannelInfo(int Language, int *UsingCh, int *MaxCh);
int __stdcall PTTS_MakeWaveHeader(int nEncoding, int nSamplingRate, int nByteNum, char *szHeader);
int __stdcall PTTS_MakeAuHeader(int nEncoding, int nSamplingRate, int nByteNum, char *szHeader);
void __stdcall PTTS_GetDBInfo(int Language, int SpeakerID, PowerTTSDBINFO *st_TTSDBInfo);
int __stdcall PTTS_GetError();

/*===========================================================================*/
/* File API */
int __stdcall PTTS_TextToFile(int Language, int Speaker, int Format, int Encoding, int SamplingRate,
					  char *TextBuf, char *OutFileName, char *tagString, char *UserDictFileName);

/*===========================================================================*/
/* Korean Language Only */
int  __stdcall PTTS_NameToSpeech(void *pTTSThread, char *Text, int bTaggedText);
int  __stdcall PTTS_NameToPcmBuf(void *pTTSThread, char *Text, int bTaggedText, int OutBufSize);
int  __stdcall PTTS_NameToFile(int Language, int Speaker, int Format, int Encoding, int SamplingRate,
					   char *TextBuf, char *OutFileName, char *tagString);
/**********/

/*===========================================================================*/
/* �߰� ���� �Լ� */
int  __stdcall PTTS_SetTextFormat(void *pTTSThread, char chTextFormat);	// 0 : naormal text(default),	1 : VXML
int  __stdcall PTTS_SetCharSet(void *pTTSThread, char chCharSet);			// 0 : KSC-5601+Ȯ��ϼ��� (default), 1: UTF-8
int  __stdcall PTTS_SetLipSync(void *pTTSThread, char chMode);			// 0 : Off (default), 1: On
int  __stdcall PTTS_SetHighLight(void *pTTSThread, char chMode);			// 0 : Off (default), 1: On
int  __stdcall PTTS_SetByteSwap(void *pTTSThread, char chMode);			// 0 : Off (default), 1: On

int  __stdcall PTTS_AudioMixer(char *in_Audio1, char *in_Audio2, char *out_Audio, int SamplingRate, int Format, int Encoding, int nMode);

/* Korean Language Only */
int  __stdcall PTTS_SMSToSpeech(void *pTTSThread, char *Text, int bTaggedText);
int  __stdcall PTTS_SMSToPcmBuf(void *pTTSThread, char *Text, int bTaggedText, int OutBufSize);
int  __stdcall PTTS_SMSToFile(int Language, int Speaker, int Format, int Encoding, int SamplingRate,
					   char *TextBuf, char *OutFileName, char *tagString);

/*===========================================================================*/
/* SOUND CARD API */
#if defined(WIN32)
int  __stdcall PTTS_PlayTTS(HWND hUsrWnd, UINT uUsrMsg, char *TextBuf, char *tagString, int Language, int Speaker);
int  __stdcall PTTS_StopTTS(void);
int  __stdcall PTTS_PauseTTS(void);
int  __stdcall PTTS_RestartTTS(void);
#endif

/* Encoding Functions */
int  __stdcall PTTS_uLawEnCoding(int NumData, short *Data, unsigned char *OutBuf);
int  __stdcall PTTS_aLawEnCoding(int NumData, short *Data, unsigned char *OutBuf);
int  __stdcall PTTS_ADPCMEnCoding(int NumData, short *Data, unsigned char *OutBuf);
int  __stdcall PTTS_ADPCMDeCoding(int NumData, unsigned char *Data, short *OutBuf);
int  __stdcall PTTS_VOXADPCMEnCoding(int NumData,short *Data,unsigned char *OutBuf);
int  __stdcall PTTS_ConvSamplingRate(int NumData, short *Data, short *OutBuf, int SrcSRate, int DestSRate);
int  __stdcall PTTS_ConvSamplingRateBuf(int NumData, short *Data, short *OutBuf, int SrcSRate, int DestSRate, int nFlag, FILTERBUF *st_FltBuf);
int  __stdcall PTTS_Linear8EnCoding(int NumData, short *Data, unsigned char *OutBuf);
int  __stdcall PTTS_Linear8UnsignedEnCoding(int NumData, short *Data, unsigned char *OutBuf);

int  __stdcall PTTS_LoadUserDict(void *pTTSThread, char *UsrDictFileName, int *nErrorType, int *nErrorLine);
void __stdcall PTTS_UnLoadUserDict(void *pTTSThread);
int  __stdcall PTTS_ChangeUserDict(void *pTTSThread, char *UsrDictFileName, int *nErrorType, int *nErrorLine);

void __stdcall PTTS_RegisterUserDict(char *UsrDictFileName);
void __stdcall PTTS_DeleteUserDict();

/* Effect Functions */
int  __stdcall PTTS_LoadUserEffDB(int Language, char *UserEffDB_IdxFileName, char *UserEffDB_DataDir, int UserEffDB_DataFormat, int UserEffDB_TagRead);
void __stdcall PTTS_UnLoadUserEffDB(int Language);
void __stdcall PTTS_SetEffectTagRead(int Language, int UserEffDB_TagRead);
int  __stdcall PTTS_GetEffectTagRead(int Language);

void __stdcall PTTS_SetOemKey( char *OemKey );

#ifdef __cplusplus
};
#endif