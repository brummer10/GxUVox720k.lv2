// generated from file './/uvox.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace uvox {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	int 	iConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec14[2];
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec16[2];
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec17[2];
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fConst85;
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fConst92;
	double 	fConst93;
	double 	fConst94;
	double 	fConst95;
	double 	fConst96;
	double 	fConst97;
	double 	fConst98;
	double 	fConst99;
	double 	fConst100;
	double 	fConst101;
	double 	fConst102;
	double 	fConst103;
	double 	fConst104;
	double 	fConst105;
	double 	fConst106;
	double 	fConst107;
	double 	fConst108;
	double 	fConst109;
	double 	fConst110;
	double 	fConst111;
	double 	fConst112;
	double 	fConst113;
	double 	fConst114;
	double 	fConst115;
	double 	fConst116;
	double 	fConst117;
	double 	fConst118;
	double 	fConst119;
	double 	fConst120;
	double 	fConst121;
	double 	fConst122;
	double 	fConst123;
	double 	fConst124;
	double 	fConst125;
	double 	fConst126;
	double 	fConst127;
	double 	fConst128;
	double 	fConst129;
	double 	fConst130;
	double 	fConst131;
	double 	fConst132;
	double 	fConst133;
	double 	fConst134;
	double 	fConst135;
	double 	fConst136;
	double 	fConst137;
	double 	fRec18[7];
	double 	fConst138;
	double 	fConst139;
	double 	fConst140;
	double 	fConst141;
	double 	fConst142;
	double 	fConst143;
	double 	fConst144;
	double 	fConst145;
	double 	fConst146;
	double 	fConst147;
	double 	fConst148;
	double 	fConst149;
	double 	fConst150;
	double 	fConst151;
	double 	fConst152;
	double 	fConst153;
	double 	fConst154;
	double 	fConst155;
	double 	fConst156;
	double 	fConst157;
	double 	fConst158;
	double 	fConst159;
	double 	fConst160;
	double 	fConst161;
	double 	fConst162;
	double 	fConst163;
	double 	fConst164;
	double 	fConst165;
	double 	fConst166;
	double 	fConst167;
	double 	fConst168;
	double 	fConst169;
	double 	fConst170;
	double 	fConst171;
	double 	fConst172;
	double 	fConst173;
	double 	fConst174;
	double 	fConst175;
	double 	fConst176;
	double 	fConst177;
	double 	fConst178;
	double 	fConst179;
	double 	fConst180;
	double 	fConst181;
	double 	fConst182;
	double 	fConst183;
	double 	fConst184;
	double 	fConst185;
	double 	fConst186;
	double 	fConst187;
	double 	fConst188;
	double 	fConst189;
	double 	fConst190;
	double 	fConst191;
	double 	fConst192;
	double 	fConst193;
	double 	fConst194;
	double 	fConst195;
	double 	fConst196;
	double 	fConst197;
	double 	fConst198;
	double 	fConst199;
	double 	fRec15[3];
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT	*fslider3_;
	double 	fConst200;
	double 	fConst201;
	int 	IOTA;
	double 	fVec0[512];
	double 	fRec12[2];
	double 	fVec1[128];
	double 	fRec10[2];
	double 	fVec2[64];
	double 	fRec8[2];
	double 	fVec3[4096];
	double 	fRec6[2];
	double 	fRec7[2];
	double 	fVec4[4096];
	double 	fRec19[2];
	double 	fRec20[2];
	double 	fVec5[2048];
	double 	fRec21[2];
	double 	fRec22[2];
	double 	fVec6[2048];
	double 	fRec23[2];
	double 	fRec24[2];
	double 	fVec7[2];
	double 	fConst202;
	double 	fConst203;
	double 	fConst204;
	double 	fRec5[2];
	double 	fRec4[3];
	FAUSTFLOAT 	fslider4;
	FAUSTFLOAT	*fslider4_;
	double 	fRec3[4];
	double 	fConst205;
	double 	fConst206;
	double 	fConst207;
	double 	fConst208;
	double 	fConst209;
	double 	fConst210;
	FAUSTFLOAT 	fslider5;
	FAUSTFLOAT	*fslider5_;
	double 	fRec25[2];
	double 	fConst211;
	double 	fRec2[3];
	double 	fRec1[3];
	double 	fConst212;
	double 	fConst213;
	double 	fConst214;
	double 	fRec0[3];
	double 	fConst215;
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "uvox";
	name = N_("Univox720k");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec14[i] = 0;
	for (int i=0; i<2; i++) fRec16[i] = 0;
	for (int i=0; i<2; i++) fRec17[i] = 0;
	for (int i=0; i<7; i++) fRec18[i] = 0;
	for (int i=0; i<3; i++) fRec15[i] = 0;
	for (int i=0; i<512; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec12[i] = 0;
	for (int i=0; i<128; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec10[i] = 0;
	for (int i=0; i<64; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRec8[i] = 0;
	for (int i=0; i<4096; i++) fVec3[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fRec7[i] = 0;
	for (int i=0; i<4096; i++) fVec4[i] = 0;
	for (int i=0; i<2; i++) fRec19[i] = 0;
	for (int i=0; i<2; i++) fRec20[i] = 0;
	for (int i=0; i<2048; i++) fVec5[i] = 0;
	for (int i=0; i<2; i++) fRec21[i] = 0;
	for (int i=0; i<2; i++) fRec22[i] = 0;
	for (int i=0; i<2048; i++) fVec6[i] = 0;
	for (int i=0; i<2; i++) fRec23[i] = 0;
	for (int i=0; i<2; i++) fRec24[i] = 0;
	for (int i=0; i<2; i++) fVec7[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<3; i++) fRec4[i] = 0;
	for (int i=0; i<4; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec25[i] = 0;
	for (int i=0; i<3; i++) fRec2[i] = 0;
	for (int i=0; i<3; i++) fRec1[i] = 0;
	for (int i=0; i<3; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	iConst0 = min(192000, max(1, fSamplingFreq));
	fConst1 = tan((376.99111843077515 / double(iConst0)));
	fConst2 = (1.0 / faustpower<2>(fConst1));
	fConst3 = (2 * (1 - fConst2));
	fConst4 = (1.0 / fConst1);
	fConst5 = (1 + ((fConst4 - 1.414213562373095) / fConst1));
	fConst6 = (1.0 / (1 + ((1.414213562373095 + fConst4) / fConst1)));
	fConst7 = tan((1256.6370614359173 / double(iConst0)));
	fConst8 = (2 * (1 - (1.0 / faustpower<2>(fConst7))));
	fConst9 = double((1.0 / double(iConst0)));
	fConst10 = (fConst9 / sin((2513.2741228718346 * fConst9)));
	fConst11 = (7066.589504111799 * fConst10);
	fConst12 = (1.0 / fConst7);
	fConst13 = (1 + ((fConst12 - fConst11) / fConst7));
	fConst14 = (1.0 / (1 + ((fConst11 + fConst12) / fConst7)));
	fConst15 = tan((17278.75959474386 / double(iConst0)));
	fConst16 = (2 * (1 - (1.0 / faustpower<2>(fConst15))));
	fConst17 = (1.0 / fConst15);
	fConst18 = (1 + ((fConst17 - 1.414213562373095) / fConst15));
	fConst19 = (1.0 / (1 + ((1.414213562373095 + fConst17) / fConst15)));
	fConst20 = double(iConst0);
	fConst21 = (7.52386866425532e-15 * fConst20);
	fConst22 = (1.64976514115831e-10 + (fConst20 * ((fConst20 * (7.2877287868723e-11 - fConst21)) - 2.30109753359925e-10)));
	fConst23 = (2.2571605992766e-14 * fConst20);
	fConst24 = (4.94929542347492e-10 + (fConst20 * ((fConst20 * (fConst23 - 7.2877287868723e-11)) - 2.30109753359925e-10)));
	fConst25 = (4.94929542347492e-10 + (fConst20 * (2.30109753359925e-10 + (fConst20 * (0 - (7.2877287868723e-11 + fConst23))))));
	fConst26 = (1.64976514115831e-10 + (fConst20 * (2.30109753359925e-10 + (fConst20 * (7.2877287868723e-11 + fConst21)))));
	fConst27 = (1.0 / fConst26);
	fConst28 = tan((20461.192952830323 / double(iConst0)));
	fConst29 = (2 * (1 - (1.0 / faustpower<2>(fConst28))));
	fConst30 = (1.0 / fConst28);
	fConst31 = (1 + ((fConst30 - 1.0000000000000004) / fConst28));
	fConst32 = (1.0 / (1 + ((1.0000000000000004 + fConst30) / fConst28)));
	fConst33 = (4.34006467477127e-10 * fConst20);
	fConst34 = (2.77980702865717e-10 + (fConst20 * (fConst33 - 1.02288863996017e-09)));
	fConst35 = faustpower<2>(fConst20);
	fConst36 = (5.55961405731434e-10 - (8.68012934954254e-10 * fConst35));
	fConst37 = (2.77980702865717e-10 + (fConst20 * (1.02288863996017e-09 + fConst33)));
	fConst38 = (1.0 / fConst37);
	fConst39 = (4.8035841812418e-27 * fConst20);
	fConst40 = (1.51631795446102e-16 + (fConst20 * (4.41642343467837e-17 + (fConst20 * (6.82823840929032e-20 + (fConst20 * (3.24323967288973e-23 + fConst39)))))));
	fConst41 = (6.71039284842902e-28 * fConst20);
	fConst42 = (fConst20 * (1.90842177598527e-24 + (fConst20 * (9.08011692659111e-25 + fConst41))));
	fConst43 = ((fConst20 * ((fConst20 * (0 - (1.20997937083842e-24 + fConst41))) - 3.94420578609516e-24)) - 3.53411439997273e-24);
	fConst44 = (3.35519642421451e-26 * fConst20);
	fConst45 = ((fConst20 * ((fConst20 * (0 - (5.80698043531545e-23 + fConst44))) - 1.99881254160991e-22)) - 1.96339688887374e-22);
	fConst46 = (7.14378925263479e-28 * fConst20);
	fConst47 = (fConst20 * ((fConst20 * ((fConst20 * (0 - (2.37656745592405e-24 + fConst46))) - 1.76465293140627e-21)) - 3.70471574055323e-21));
	fConst48 = (6.46136067065721e-21 + (fConst20 * (7.46227083761308e-21 + (fConst20 * (2.33400667891811e-21 + (fConst20 * (2.69803797229261e-24 + fConst46)))))));
	fConst49 = (3.5718946263174e-26 * fConst20);
	fConst50 = (3.80780002690664e-19 + (fConst20 * (3.88064144039659e-19 + (fConst20 * (1.12928826573142e-19 + (fConst20 * (1.33507144219663e-22 + fConst49)))))));
	fConst51 = (9.6071683624836e-29 * fConst20);
	fConst52 = (fConst20 * ((fConst20 * ((fConst20 * ((fConst20 * (0 - (6.44297422088581e-25 + fConst51))) - 1.30587727530285e-21)) - 7.97538480262289e-19)) - 1.67330797338641e-18));
	fConst53 = (3.0581393966094e-18 + (fConst20 * (3.43335297117683e-18 + (fConst20 * (1.05835115629299e-18 + (fConst20 * (1.5310588345637e-21 + (fConst20 * (6.87529679719757e-25 + fConst51)))))))));
	fConst54 = (2.74146095019104e-23 * fConst20);
	fConst55 = ((fConst20 * (8.26702779868721e-20 - fConst54)) - 1.8276406334607e-17);
	fConst56 = (8.22438285057313e-26 * fConst20);
	fConst57 = (4.67876002165938e-20 + (fConst20 * (fConst56 - 2.31927596386162e-22)));
	fConst58 = (4.82497127233624e-26 * fConst20);
	fConst59 = (2.41248563616812e-23 - fConst58);
	fConst60 = (9.64994254467247e-28 * fConst20);
	fConst61 = (fConst20 * (1.46211250676856e-24 - fConst60));
	fConst62 = (7.31056253384278e-22 + (fConst20 * (fConst60 - 1.89635992127882e-24)));
	fConst63 = (1.64487657011463e-27 * fConst20);
	fConst64 = (fConst20 * (3.5666683877233e-21 + (fConst20 * (fConst63 - 5.64375427612663e-24))));
	fConst65 = (1.41780606716951e-18 + (fConst20 * ((fConst20 * (6.38394873267821e-24 - fConst63)) - 5.22543502665222e-21)));
	fConst66 = (5.48292190038209e-25 * fConst20);
	fConst67 = (fConst20 * ((fConst20 * (1.98847300920524e-21 - fConst66)) - 1.35134640777094e-18));
	fConst68 = ((fConst20 * (1.95251833347061e-18 + (fConst20 * (fConst66 - 2.23520449472243e-21)))) - 5.5383049498809e-16);
	fConst69 = ((fConst20 * (4.41642343467837e-17 + (fConst20 * ((fConst20 * (3.24323967288973e-23 - fConst39)) - 6.82823840929032e-20)))) - 1.51631795446102e-16);
	fConst70 = (fConst20 * (1.90842177598527e-24 + (fConst20 * (fConst41 - 9.08011692659111e-25))));
	fConst71 = (3.53411439997273e-24 + (fConst20 * ((fConst20 * (1.20997937083842e-24 - fConst41)) - 3.94420578609516e-24)));
	fConst72 = ((fConst20 * (1.99881254160991e-22 + (fConst20 * (fConst44 - 5.80698043531545e-23)))) - 1.96339688887374e-22);
	fConst73 = (6.46136067065721e-21 + (fConst20 * ((fConst20 * (2.33400667891811e-21 + (fConst20 * (fConst46 - 2.69803797229261e-24)))) - 7.46227083761308e-21)));
	fConst74 = (fConst20 * (3.70471574055323e-21 + (fConst20 * ((fConst20 * (2.37656745592405e-24 - fConst46)) - 1.76465293140627e-21))));
	fConst75 = ((fConst20 * (3.88064144039659e-19 + (fConst20 * ((fConst20 * (1.33507144219663e-22 - fConst49)) - 1.12928826573142e-19)))) - 3.80780002690664e-19);
	fConst76 = (fConst20 * ((fConst20 * (7.97538480262289e-19 + (fConst20 * ((fConst20 * (6.44297422088581e-25 - fConst51)) - 1.30587727530285e-21)))) - 1.67330797338641e-18));
	fConst77 = ((fConst20 * (3.43335297117683e-18 + (fConst20 * ((fConst20 * (1.5310588345637e-21 + (fConst20 * (fConst51 - 6.87529679719757e-25)))) - 1.05835115629299e-18)))) - 3.0581393966094e-18);
	fConst78 = (1.92143367249672e-26 * fConst20);
	fConst79 = ((fConst20 * (8.83284686935675e-17 + (fConst35 * (fConst78 - 6.48647934577946e-23)))) - 6.0652718178441e-16);
	fConst80 = (4.02623570905741e-27 * fConst20);
	fConst81 = ((fConst20 * (3.63204677063645e-24 - fConst80)) - 3.81684355197054e-24);
	fConst82 = (7.88841157219032e-24 + (fConst20 * (fConst80 - 4.83991748335367e-24)));
	fConst83 = (1.3420785696858e-25 * fConst20);
	fConst84 = ((fConst35 * (1.16139608706309e-22 - fConst83)) - 3.92679377774747e-22);
	fConst85 = (4.28627355158087e-27 * fConst20);
	fConst86 = (fConst35 * (3.52930586281253e-21 + (fConst20 * (fConst85 - 9.50626982369619e-24))));
	fConst87 = (1.29227213413144e-20 + (fConst35 * ((fConst20 * (1.07921518891705e-23 - fConst85)) - 4.66801335783623e-21)));
	fConst88 = (1.42875785052696e-25 * fConst20);
	fConst89 = ((fConst20 * (7.76128288079319e-19 + (fConst35 * (fConst88 - 2.67014288439326e-22)))) - 1.52312001076266e-18);
	fConst90 = (5.76430101749016e-28 * fConst20);
	fConst91 = (fConst20 * ((fConst35 * (2.6117545506057e-21 + (fConst20 * (fConst90 - 2.57718968835432e-24)))) - 3.34661594677283e-18));
	fConst92 = ((fConst20 * (6.86670594235366e-18 + (fConst35 * ((fConst20 * (2.75011871887903e-24 - fConst90)) - 3.06211766912741e-21)))) - 1.22325575864376e-17);
	fConst93 = (2.4017920906209e-26 * fConst20);
	fConst94 = ((fConst20 * ((fConst20 * (2.0484715227871e-19 + (fConst20 * (0 - (3.24323967288973e-23 + fConst93))))) - 4.41642343467837e-17)) - 7.58158977230512e-16);
	fConst95 = (1.00655892726435e-26 * fConst20);
	fConst96 = (fConst20 * ((fConst20 * (fConst95 - 4.54005846329556e-24)) - 1.90842177598527e-24));
	fConst97 = ((fConst20 * (3.94420578609516e-24 + (fConst20 * (6.04989685419209e-24 - fConst95)))) - 1.06023431999182e-23);
	fConst98 = (1.67759821210725e-25 * fConst20);
	fConst99 = (1.96339688887374e-22 + (fConst20 * ((fConst20 * (5.80698043531545e-23 + fConst98)) - 5.99643762482972e-22)));
	fConst100 = (1.07156838789522e-26 * fConst20);
	fConst101 = (fConst20 * ((fConst20 * (1.76465293140627e-21 + (fConst20 * (1.18828372796202e-23 - fConst100)))) - 1.11141472216597e-20));
	fConst102 = ((fConst20 * (2.23868125128392e-20 + (fConst20 * ((fConst20 * (fConst100 - 1.34901898614631e-23)) - 2.33400667891811e-21)))) - 6.46136067065721e-21);
	fConst103 = (1.7859473131587e-25 * fConst20);
	fConst104 = ((fConst20 * ((fConst20 * (3.38786479719427e-19 + (fConst20 * (0 - (1.33507144219663e-22 + fConst103))))) - 3.88064144039659e-19)) - 1.90390001345332e-18);
	fConst105 = (1.44107525437254e-27 * fConst20);
	fConst106 = (fConst20 * (1.67330797338641e-18 + (fConst20 * ((fConst20 * (1.30587727530285e-21 + (fConst20 * (3.2214871104429e-24 - fConst105)))) - 2.39261544078687e-18))));
	fConst107 = ((fConst20 * ((fConst20 * (3.17505346887898e-18 + (fConst20 * ((fConst20 * (fConst105 - 3.43764839859879e-24)) - 1.5310588345637e-21)))) - 3.43335297117683e-18)) - 1.5290696983047e-17);
	fConst108 = (1.3420785696858e-26 * fConst35);
	fConst109 = (7.63368710394109e-24 - fConst108);
	fConst110 = (fConst108 - 1.57768231443806e-23);
	fConst111 = (7.85358755549495e-22 - (2.32279217412618e-22 * fConst35));
	fConst112 = (1.42875785052696e-26 * fConst35);
	fConst113 = (fConst35 * (fConst112 - 7.05861172562507e-21));
	fConst114 = ((fConst35 * (9.33602671567245e-21 - fConst112)) - 2.58454426826288e-20);
	fConst115 = ((5.34028576878653e-22 * fConst35) - 1.55225657615864e-18);
	fConst116 = (1.92143367249672e-27 * fConst35);
	fConst117 = (6.69323189354565e-18 + (fConst35 * (fConst116 - 5.2235091012114e-21)));
	fConst118 = ((fConst35 * (6.12423533825482e-21 - fConst116)) - 1.37334118847073e-17);
	fConst119 = ((1.29729586915589e-22 * fConst35) - 1.76656937387135e-16);
	fConst120 = (7.58158977230512e-16 + (fConst20 * ((fConst20 * ((fConst20 * (fConst93 - 3.24323967288973e-23)) - 2.0484715227871e-19)) - 4.41642343467837e-17)));
	fConst121 = (fConst20 * ((fConst20 * (4.54005846329556e-24 + fConst95)) - 1.90842177598527e-24));
	fConst122 = (1.06023431999182e-23 + (fConst20 * (3.94420578609516e-24 + (fConst20 * (0 - (6.04989685419209e-24 + fConst95))))));
	fConst123 = (1.96339688887374e-22 + (fConst20 * (5.99643762482972e-22 + (fConst20 * (5.80698043531545e-23 - fConst98)))));
	fConst124 = (fConst20 * (1.11141472216597e-20 + (fConst20 * (1.76465293140627e-21 + (fConst20 * (0 - (1.18828372796202e-23 + fConst100)))))));
	fConst125 = ((fConst20 * ((fConst20 * ((fConst20 * (1.34901898614631e-23 + fConst100)) - 2.33400667891811e-21)) - 2.23868125128392e-20)) - 6.46136067065721e-21);
	fConst126 = (1.90390001345332e-18 + (fConst20 * ((fConst20 * ((fConst20 * (fConst103 - 1.33507144219663e-22)) - 3.38786479719427e-19)) - 3.88064144039659e-19)));
	fConst127 = (fConst20 * (1.67330797338641e-18 + (fConst20 * (2.39261544078687e-18 + (fConst20 * (1.30587727530285e-21 + (fConst20 * (0 - (3.2214871104429e-24 + fConst105)))))))));
	fConst128 = (1.5290696983047e-17 + (fConst20 * ((fConst20 * ((fConst20 * ((fConst20 * (3.43764839859879e-24 + fConst105)) - 1.5310588345637e-21)) - 3.17505346887898e-18)) - 3.43335297117683e-18)));
	fConst129 = (6.0652718178441e-16 + (fConst20 * (8.83284686935675e-17 + (fConst35 * (0 - (6.48647934577946e-23 + fConst78))))));
	fConst130 = ((fConst20 * (0 - (3.63204677063645e-24 + fConst80))) - 3.81684355197054e-24);
	fConst131 = (7.88841157219032e-24 + (fConst20 * (4.83991748335367e-24 + fConst80)));
	fConst132 = ((fConst35 * (1.16139608706309e-22 + fConst83)) - 3.92679377774747e-22);
	fConst133 = (fConst35 * (3.52930586281253e-21 + (fConst20 * (9.50626982369619e-24 + fConst85))));
	fConst134 = (1.29227213413144e-20 + (fConst35 * ((fConst20 * (0 - (1.07921518891705e-23 + fConst85))) - 4.66801335783623e-21)));
	fConst135 = (1.52312001076266e-18 + (fConst20 * (7.76128288079319e-19 + (fConst35 * (0 - (2.67014288439326e-22 + fConst88))))));
	fConst136 = (fConst20 * ((fConst35 * (2.6117545506057e-21 + (fConst20 * (2.57718968835432e-24 + fConst90)))) - 3.34661594677283e-18));
	fConst137 = (1.22325575864376e-17 + (fConst20 * (6.86670594235366e-18 + (fConst35 * ((fConst20 * (0 - (2.75011871887903e-24 + fConst90))) - 3.06211766912741e-21)))));
	fConst138 = (3.28975314022925e-25 * fConst20);
	fConst139 = (4.63855192772325e-22 - fConst138);
	fConst140 = (5.78996552680348e-27 * fConst20);
	fConst141 = (fConst20 * (fConst140 - 5.84845002707423e-24));
	fConst142 = ((fConst20 * (7.58543968511527e-24 - fConst140)) - 1.46211250676856e-21);
	fConst143 = (1.92998850893449e-25 * fConst20);
	fConst144 = (fConst143 - 4.82497127233624e-23);
	fConst145 = (9.86925942068776e-27 * fConst20);
	fConst146 = ((fConst20 * (2.25750171045065e-23 - fConst145)) - 7.13333677544659e-21);
	fConst147 = (1.04508700533044e-20 + (fConst20 * (fConst145 - 2.55357949307128e-23)));
	fConst148 = (2.19316876015283e-24 * fConst20);
	fConst149 = (fConst35 * (fConst148 - 3.97694601841047e-21));
	fConst150 = ((fConst35 * (4.47040898944486e-21 - fConst148)) - 1.10766098997618e-15);
	fConst151 = ((5.48292190038209e-23 * fConst35) - 3.65528126692139e-17);
	fConst152 = (1.8276406334607e-17 + (fConst20 * (fConst54 - 2.48010833960616e-19)));
	fConst153 = (4.11219142528656e-25 * fConst20);
	fConst154 = ((fConst20 * (2.31927596386162e-22 + fConst153)) - 1.40362800649781e-19);
	fConst155 = (2.41248563616812e-25 * fConst20);
	fConst156 = (0 - (2.41248563616812e-23 + fConst155));
	fConst157 = (1.44749138170087e-26 * fConst20);
	fConst158 = (fConst20 * (7.31056253384278e-24 - fConst157));
	fConst159 = ((fConst20 * (fConst157 - 9.48179960639409e-24)) - 7.31056253384278e-22);
	fConst160 = (2.46731485517194e-26 * fConst20);
	fConst161 = (fConst20 * ((fConst20 * (fConst160 - 2.82187713806331e-23)) - 3.5666683877233e-21));
	fConst162 = ((fConst20 * (5.22543502665222e-21 + (fConst20 * (3.1919743663391e-23 - fConst160)))) - 4.25341820150853e-18);
	fConst163 = (2.74146095019104e-24 * fConst20);
	fConst164 = (fConst20 * (4.05403922331282e-18 + (fConst20 * (0 - (1.98847300920524e-21 + fConst163)))));
	fConst165 = (5.5383049498809e-16 + (fConst20 * ((fConst20 * (2.23520449472243e-21 + fConst163)) - 5.85755500041183e-18)));
	fConst166 = (7.31056253384278e-17 - (1.09658438007642e-22 * fConst35));
	fConst167 = (1.92998850893449e-26 * fConst35);
	fConst168 = (2.92422501353711e-21 - fConst167);
	fConst169 = (3.28975314022925e-26 * fConst35);
	fConst170 = (1.42666735508932e-20 - fConst169);
	fConst171 = (fConst169 - 2.09017401066089e-20);
	fConst172 = (7.95389203682095e-21 * fConst35);
	fConst173 = (2.21532197995236e-15 - (8.94081797888972e-21 * fConst35));
	fConst174 = (1.8276406334607e-17 + (fConst20 * (2.48010833960616e-19 + fConst54)));
	fConst175 = (1.40362800649781e-19 + (fConst20 * (2.31927596386162e-22 - fConst153)));
	fConst176 = (fConst20 * (0 - (7.31056253384278e-24 + fConst157)));
	fConst177 = ((fConst20 * (9.48179960639409e-24 + fConst157)) - 7.31056253384278e-22);
	fConst178 = (fConst155 - 2.41248563616812e-23);
	fConst179 = (fConst20 * ((fConst20 * (2.82187713806331e-23 + fConst160)) - 3.5666683877233e-21));
	fConst180 = (4.25341820150853e-18 + (fConst20 * (5.22543502665222e-21 + (fConst20 * (0 - (3.1919743663391e-23 + fConst160))))));
	fConst181 = (fConst20 * ((fConst20 * (fConst163 - 1.98847300920524e-21)) - 4.05403922331282e-18));
	fConst182 = (5.5383049498809e-16 + (fConst20 * (5.85755500041183e-18 + (fConst20 * (2.23520449472243e-21 - fConst163)))));
	fConst183 = (4.63855192772325e-22 + fConst138);
	fConst184 = (0 - (4.82497127233624e-23 + fConst143));
	fConst185 = (fConst20 * (5.84845002707423e-24 + fConst140));
	fConst186 = ((fConst20 * (0 - (7.58543968511527e-24 + fConst140))) - 1.46211250676856e-21);
	fConst187 = ((fConst20 * (0 - (2.25750171045065e-23 + fConst145))) - 7.13333677544659e-21);
	fConst188 = (1.04508700533044e-20 + (fConst20 * (2.55357949307128e-23 + fConst145)));
	fConst189 = (fConst35 * (0 - (3.97694601841047e-21 + fConst148)));
	fConst190 = ((fConst35 * (4.47040898944486e-21 + fConst148)) - 1.10766098997618e-15);
	fConst191 = ((fConst20 * (0 - (8.26702779868721e-20 + fConst54))) - 1.8276406334607e-17);
	fConst192 = ((fConst20 * (0 - (2.31927596386162e-22 + fConst56))) - 4.67876002165938e-20);
	fConst193 = (2.41248563616812e-23 + fConst58);
	fConst194 = (fConst20 * (0 - (1.46211250676856e-24 + fConst60)));
	fConst195 = (7.31056253384278e-22 + (fConst20 * (1.89635992127882e-24 + fConst60)));
	fConst196 = (fConst20 * (3.5666683877233e-21 + (fConst20 * (5.64375427612663e-24 + fConst63))));
	fConst197 = ((fConst20 * ((fConst20 * (0 - (6.38394873267821e-24 + fConst63))) - 5.22543502665222e-21)) - 1.41780606716951e-18);
	fConst198 = (fConst20 * (1.35134640777094e-18 + (fConst20 * (1.98847300920524e-21 + fConst66))));
	fConst199 = ((fConst20 * ((fConst20 * (0 - (2.23520449472243e-21 + fConst66))) - 1.95251833347061e-18)) - 5.5383049498809e-16);
	fConst200 = (fConst35 / fConst37);
	fConst201 = (0.06 * fConst200);
	IOTA = 0;
	fConst202 = (1 + fConst30);
	fConst203 = (2.0 / fConst202);
	fConst204 = (0 - ((1 - fConst30) / fConst202));
	fConst205 = (7.10269964334188e-17 * fConst20);
	fConst206 = (0 - (3.31899550200126e-10 + fConst205));
	fConst207 = (2.13080989300256e-16 * fConst20);
	fConst208 = (3.31899550200126e-10 + fConst207);
	fConst209 = (3.31899550200126e-10 - fConst207);
	fConst210 = (fConst205 - 3.31899550200126e-10);
	fConst211 = (fConst35 / fConst26);
	fConst212 = (1256.6370614359173 * fConst10);
	fConst213 = (1 + ((fConst12 - fConst212) / fConst7));
	fConst214 = (1 + ((fConst212 + fConst12) / fConst7));
	fConst215 = (2 * (0 - fConst2));
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
#define fslider3 (*fslider3_)
#define fslider4 (*fslider4_)
#define fslider5 (*fslider5_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	double 	fSlow2 = (0.007000000000000006 * double(fslider2));
	double 	fSlow3 = (fConst201 * double(fslider3));
	int 	iSlow4 = int(double(fslider4));
	double 	fSlow5 = (0.007000000000000006 * double(fslider5));
	for (int i=0; i<count; i++) {
		double fTemp0 = (fConst8 * fRec1[1]);
		fRec14[0] = ((0.993 * fRec14[1]) + fSlow0);
		double fTemp1 = (0 - (3.76715899707302e-09 * fRec14[0]));
		fRec16[0] = ((0.993 * fRec16[1]) + fSlow1);
		fRec17[0] = ((0.993 * fRec17[1]) + fSlow2);
		double fTemp2 = (1.48742188551041e-16 + (fConst20 * (((fRec16[0] * (fConst53 + (fConst52 * fRec16[0]))) + (fRec17[0] * (fConst50 + (fConst20 * ((fRec16[0] * (fConst48 + (fConst47 * fRec16[0]))) + (fRec17[0] * (fConst45 + (fConst20 * (fRec16[0] * (fConst43 + (fConst42 * fRec16[0]))))))))))) + fConst40)));
		fRec18[0] = ((double)input0[i] - (((((((fRec18[1] * (8.92453131306244e-16 + (fConst20 * (((fRec16[0] * (fConst137 + (fConst136 * fRec16[0]))) + (fRec17[0] * (fConst135 + (fConst20 * ((fRec16[0] * (fConst134 + (fConst133 * fRec16[0]))) + (fRec17[0] * (fConst132 + (fConst35 * (fRec16[0] * (fConst131 + (fConst130 * fRec16[0]))))))))))) + fConst129)))) + (fRec18[2] * (2.23113282826561e-15 + (fConst20 * (((fRec16[0] * (fConst128 + (fConst127 * fRec16[0]))) + (fRec17[0] * (fConst126 + (fConst20 * ((fRec16[0] * (fConst125 + (fConst124 * fRec16[0]))) + (fRec17[0] * (fConst123 + (fConst20 * (fRec16[0] * (fConst122 + (fConst121 * fRec16[0]))))))))))) + fConst120))))) + (fRec18[3] * (2.97484377102081e-15 + (fConst35 * (fConst119 + ((fRec16[0] * (fConst118 + (fConst117 * fRec16[0]))) + (fRec17[0] * (fConst115 + ((fRec16[0] * (fConst114 + (fConst113 * fRec16[0]))) + (fRec17[0] * (fConst111 + (fConst35 * (fRec16[0] * (fConst110 + (fConst109 * fRec16[0]))))))))))))))) + (fRec18[4] * (2.23113282826561e-15 + (fConst20 * (((fRec16[0] * (fConst107 + (fConst106 * fRec16[0]))) + (fRec17[0] * (fConst104 + (fConst20 * ((fRec16[0] * (fConst102 + (fConst101 * fRec16[0]))) + (fRec17[0] * (fConst99 + (fConst20 * (fRec16[0] * (fConst97 + (fConst96 * fRec16[0]))))))))))) + fConst94))))) + (fRec18[5] * (8.92453131306244e-16 + (fConst20 * (((fRec16[0] * (fConst92 + (fConst91 * fRec16[0]))) + (fRec17[0] * (fConst89 + (fConst20 * ((fRec16[0] * (fConst87 + (fConst86 * fRec16[0]))) + (fRec17[0] * (fConst84 + (fConst35 * (fRec16[0] * (fConst82 + (fConst81 * fRec16[0]))))))))))) + fConst79))))) + (fRec18[6] * (1.48742188551041e-16 + (fConst20 * (((fRec16[0] * (fConst77 + (fConst76 * fRec16[0]))) + (fRec17[0] * (fConst75 + (fConst20 * ((fRec16[0] * ((fConst74 * fRec16[0]) + fConst73)) + (fRec17[0] * (fConst72 + (fConst20 * (fRec16[0] * (fConst71 + (fConst70 * fRec16[0]))))))))))) + fConst69))))) / fTemp2));
		fRec15[0] = ((fConst35 * ((((((((fRec18[0] * (((fRec16[0] * (fConst199 + (fConst198 * fRec16[0]))) + (fConst20 * (fRec17[0] * (((fRec16[0] * (fConst197 + (fConst196 * fRec16[0]))) + (fConst20 * (fRec17[0] * ((fRec16[0] * (fConst195 + (fConst194 * fRec16[0]))) + fConst193)))) + fConst192)))) + fConst191)) + (fRec18[1] * (fConst151 + ((fRec16[0] * (fConst190 + (fConst189 * fRec16[0]))) + (fConst35 * (fRec17[0] * (((fRec16[0] * (fConst188 + (fConst187 * fRec16[0]))) + (fRec17[0] * ((fRec16[0] * (fConst186 + (fConst185 * fRec16[0]))) + fConst184))) + fConst183))))))) + (fRec18[2] * (((fRec16[0] * (fConst182 + (fConst181 * fRec16[0]))) + (fConst20 * (fRec17[0] * (((fRec16[0] * (fConst180 + (fConst179 * fRec16[0]))) + (fConst20 * (fRec17[0] * (fConst178 + (fRec16[0] * (fConst177 + (fConst176 * fRec16[0]))))))) + fConst175)))) + fConst174))) + (fRec18[3] * (((fRec16[0] * (fConst173 + (fConst172 * fRec16[0]))) + (fConst35 * (fRec17[0] * (((fRec16[0] * (fConst171 + (fConst170 * fRec16[0]))) + (fRec17[0] * (9.64994254467247e-23 + (fRec16[0] * (fConst168 + (fConst167 * fRec16[0])))))) - 9.27710385544649e-22)))) + fConst166))) + (fRec18[4] * (((fRec16[0] * (fConst165 + (fConst164 * fRec16[0]))) + (fConst20 * (fRec17[0] * (((fRec16[0] * (fConst162 + (fConst161 * fRec16[0]))) + (fConst20 * (fRec17[0] * ((fRec16[0] * (fConst159 + (fConst158 * fRec16[0]))) + fConst156)))) + fConst154)))) + fConst152))) + (fRec18[5] * (fConst151 + ((fRec16[0] * (fConst150 + (fConst149 * fRec16[0]))) + (fConst35 * (fRec17[0] * (((fRec16[0] * (fConst147 + (fConst146 * fRec16[0]))) + (fRec17[0] * (fConst144 + (fRec16[0] * (fConst142 + (fConst141 * fRec16[0])))))) + fConst139))))))) + (fRec18[6] * (((fRec16[0] * (fConst68 + (fConst67 * fRec16[0]))) + (fConst20 * (fRec17[0] * (((fRec16[0] * (fConst65 + (fConst64 * fRec16[0]))) + (fConst20 * (fRec17[0] * ((fRec16[0] * (fConst62 + (fConst61 * fRec16[0]))) + fConst59)))) + fConst57)))) + fConst55))) / fTemp2)) - (fConst38 * ((fConst36 * fRec15[1]) + (fConst34 * fRec15[2]))));
		double fTemp3 = (((fRec15[0] * fTemp1) + (7.53431799414604e-09 * (fRec14[0] * fRec15[1]))) + (fRec15[2] * fTemp1));
		double fTemp4 = ((0.7 * fRec12[1]) + (fSlow3 * fTemp3));
		fVec0[IOTA&511] = fTemp4;
		fRec12[0] = fVec0[(IOTA-346)&511];
		double 	fRec13 = (0 - (0.7 * fVec0[IOTA&511]));
		double fTemp5 = (fRec12[1] + (fRec13 + (0.7 * fRec10[1])));
		fVec1[IOTA&127] = fTemp5;
		fRec10[0] = fVec1[(IOTA-112)&127];
		double 	fRec11 = (0 - (0.7 * fVec1[IOTA&127]));
		double fTemp6 = (fRec10[1] + (fRec11 + (0.7 * fRec8[1])));
		fVec2[IOTA&63] = fTemp6;
		fRec8[0] = fVec2[(IOTA-36)&63];
		double 	fRec9 = (0 - (0.7 * fVec2[IOTA&63]));
		double fTemp7 = (fRec9 + fRec8[1]);
		double fTemp8 = (fTemp7 + (0.733 * fRec6[1]));
		fVec3[IOTA&4095] = fTemp8;
		fRec6[0] = fVec3[(IOTA-2250)&4095];
		fRec7[0] = fVec3[IOTA&4095];
		double fTemp9 = (fTemp7 + (0.753 * fRec19[1]));
		fVec4[IOTA&4095] = fTemp9;
		fRec19[0] = fVec4[(IOTA-2052)&4095];
		fRec20[0] = fVec4[IOTA&4095];
		double fTemp10 = (fTemp7 + (0.773 * fRec21[1]));
		fVec5[IOTA&2047] = fTemp10;
		fRec21[0] = fVec5[(IOTA-1866)&2047];
		fRec22[0] = fVec5[IOTA&2047];
		double fTemp11 = (fRec8[1] + (fRec9 + (0.802 * fRec23[1])));
		fVec6[IOTA&2047] = fTemp11;
		fRec23[0] = fVec6[(IOTA-1600)&2047];
		fRec24[0] = fVec6[IOTA&2047];
		double fTemp12 = (((fRec24[1] + fRec22[1]) + fRec20[1]) + fRec7[1]);
		double fTemp13 = (fTemp12 + fTemp12);
		fVec7[0] = fTemp13;
		fRec5[0] = ((fConst204 * fRec5[1]) + (fConst203 * (fVec7[0] + fVec7[1])));
		fRec4[0] = (fRec5[0] - (fConst32 * ((fConst31 * fRec4[2]) + (fConst29 * fRec4[1]))));
		double fTemp14 = (fConst200 * fTemp3);
		fRec3[0] = (((iSlow4)?fTemp14:(fTemp14 + (fConst32 * (fRec4[2] + (fRec4[0] + (2 * fRec4[1])))))) - (fConst27 * (((fConst25 * fRec3[1]) + (fConst24 * fRec3[2])) + (fConst22 * fRec3[3]))));
		fRec25[0] = ((0.993 * fRec25[1]) + fSlow5);
		fRec2[0] = ((fConst211 * (fRec25[0] * ((((fConst210 * fRec3[0]) + (fConst209 * fRec3[1])) + (fConst208 * fRec3[2])) + (fConst206 * fRec3[3])))) - (fConst19 * ((fConst18 * fRec2[2]) + (fConst16 * fRec2[1]))));
		fRec1[0] = ((fConst19 * (fRec2[2] + (fRec2[0] + (2 * fRec2[1])))) - (fConst14 * ((fConst13 * fRec1[2]) + fTemp0)));
		fRec0[0] = ((fConst14 * ((fTemp0 + (fConst214 * fRec1[0])) + (fConst213 * fRec1[2]))) - (fConst6 * ((fConst5 * fRec0[2]) + (fConst3 * fRec0[1]))));
		output0[i] = (FAUSTFLOAT)(fConst6 * (((fConst2 * fRec0[0]) + (fConst215 * fRec0[1])) + (fConst2 * fRec0[2])));
		// post processing
		fRec0[2] = fRec0[1]; fRec0[1] = fRec0[0];
		fRec1[2] = fRec1[1]; fRec1[1] = fRec1[0];
		fRec2[2] = fRec2[1]; fRec2[1] = fRec2[0];
		fRec25[1] = fRec25[0];
		for (int i=3; i>0; i--) fRec3[i] = fRec3[i-1];
		fRec4[2] = fRec4[1]; fRec4[1] = fRec4[0];
		fRec5[1] = fRec5[0];
		fVec7[1] = fVec7[0];
		fRec24[1] = fRec24[0];
		fRec23[1] = fRec23[0];
		fRec22[1] = fRec22[0];
		fRec21[1] = fRec21[0];
		fRec20[1] = fRec20[0];
		fRec19[1] = fRec19[0];
		fRec7[1] = fRec7[0];
		fRec6[1] = fRec6[0];
		fRec8[1] = fRec8[0];
		fRec10[1] = fRec10[0];
		fRec12[1] = fRec12[0];
		IOTA = IOTA+1;
		fRec15[2] = fRec15[1]; fRec15[1] = fRec15[0];
		for (int i=6; i>0; i--) fRec18[i] = fRec18[i-1];
		fRec17[1] = fRec17[0];
		fRec16[1] = fRec16[0];
		fRec14[1] = fRec14[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
#undef fslider3
#undef fslider4
#undef fslider5
}
		
void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case BASS: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case GAIN: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case REVERBLEVEL: 
		fslider3_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	// static const value_pair fslider4_values[] = {{"ON"},{"OFF"},{0}};
	case REVERB: 
		fslider4_ = (float*)data; // , 2.0, 0.0, 2.0, 1.0 
		break;
	case TREBLE: 
		fslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fslider5_ = (float*)data; // , 0.25, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   BASS, 
   GAIN, 
   REVERBLEVEL, 
   REVERB, 
   TREBLE, 
   VOLUME, 
} PortIndex;
*/

} // end namespace uvox
