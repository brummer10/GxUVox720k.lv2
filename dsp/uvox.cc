// generated from file './/uvox.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace uvox {

template <int tab_size>
struct table1d_imp { // 1-dimensional clipping table
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
};

static table1d_imp<100> clip __rt_data = {
	0.005,0.795235013262,101.97,100, {
	0.00548195523036,0.016445865691,0.0274097761516,0.0383736866119,0.0493375970718,
	0.060301507531,0.0712654179894,0.0822293284464,0.0931932389016,0.104157149354,
	0.115121059803,0.126084970245,0.13704888068,0.148012791103,0.158976701508,
	0.169940611889,0.180904522235,0.19186843253,0.202832342751,0.213796252866,
	0.224760162828,0.23572407257,0.246687981995,0.257651890962,0.26861579927,
	0.279579706628,0.290543612617,0.301507516632,0.312471417804,0.323435314878,
	0.334399206045,0.3453630887,0.356326959087,0.367290811794,0.378254639021,
	0.389218429528,0.400182167115,0.411145828437,0.422109379849,0.433072772871,
	0.444035937638,0.454998773485,0.465961135365,0.476922814321,0.48788350936,
	0.498842787024,0.509800023297,0.520754320256,0.531704386732,0.542648367922,
	0.55358360312,0.564506283341,0.575410971703,0.586289940184,0.597132269761,
	0.607922663898,0.618639951041,0.629255322196,0.639730493837,0.650016225239,
	0.660051925492,0.669767316942,0.679086989359,0.687937882416,0.696258343947,
	0.704006183628,0.711163121782,0.717734492237,0.723745022743,0.72923269117,
	0.734242606851,0.738822090117,0.743017303269,0.74687127245,0.750422944114,
	0.7537069184,0.756753578753,0.759589425229,0.762237491115,0.764717773458,
	0.767047640962,0.769242202516,0.771314630963,0.773276442704,0.775137736666,
	0.776907397287,0.778593266396,0.780202288563,0.781740634041,0.783213802858,
	0.784626713121,0.785983776084,0.787288960129,0.788545845459,0.789757670968,
	0.790927374556,0.792057627879,0.793150866414,0.794209315546,0.795235013262
	}
};

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
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec4[2];
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec6[2];
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec7[2];
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
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
	double 	fVec0[2];
	double 	fConst133;
	double 	fConst134;
	double 	fConst135;
	double 	fRec10[2];
	double 	fConst136;
	double 	fConst137;
	double 	fConst138;
	double 	fConst139;
	double 	fRec9[2];
	double 	fRec8[7];
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
	double 	fConst200;
	double 	fConst201;
	double 	fRec5[3];
	double 	fConst202;
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT	*fslider3_;
	double 	fConst203;
	double 	fConst204;
	double 	fConst205;
	double 	fConst206;
	double 	fConst207;
	FAUSTFLOAT 	fslider4;
	FAUSTFLOAT	*fslider4_;
	int 	IOTA;
	double 	fVec1[512];
	double 	fRec19[2];
	double 	fVec2[128];
	double 	fRec17[2];
	double 	fVec3[64];
	double 	fRec15[2];
	double 	fVec4[4096];
	double 	fRec13[2];
	double 	fRec14[2];
	double 	fVec5[4096];
	double 	fRec21[2];
	double 	fRec22[2];
	double 	fVec6[2048];
	double 	fRec23[2];
	double 	fRec24[2];
	double 	fVec7[2048];
	double 	fRec25[2];
	double 	fRec26[2];
	double 	fVec8[2];
	double 	fConst208;
	double 	fConst209;
	double 	fConst210;
	double 	fRec12[2];
	double 	fRec11[3];
	FAUSTFLOAT 	fslider5;
	FAUSTFLOAT	*fslider5_;
	double 	fRec3[4];
	double 	fConst211;
	double 	fConst212;
	double 	fConst213;
	double 	fConst214;
	double 	fConst215;
	double 	fConst216;
	FAUSTFLOAT 	fslider6;
	FAUSTFLOAT	*fslider6_;
	double 	fRec27[2];
	double 	fConst217;
	double 	fRec2[3];
	double 	fRec1[3];
	double 	fConst218;
	double 	fConst219;
	double 	fConst220;
	double 	fRec0[3];
	double 	fConst221;
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static double symclip(double x);
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
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fRec7[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec10[i] = 0;
	for (int i=0; i<2; i++) fRec9[i] = 0;
	for (int i=0; i<7; i++) fRec8[i] = 0;
	for (int i=0; i<3; i++) fRec5[i] = 0;
	for (int i=0; i<512; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec19[i] = 0;
	for (int i=0; i<128; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRec17[i] = 0;
	for (int i=0; i<64; i++) fVec3[i] = 0;
	for (int i=0; i<2; i++) fRec15[i] = 0;
	for (int i=0; i<4096; i++) fVec4[i] = 0;
	for (int i=0; i<2; i++) fRec13[i] = 0;
	for (int i=0; i<2; i++) fRec14[i] = 0;
	for (int i=0; i<4096; i++) fVec5[i] = 0;
	for (int i=0; i<2; i++) fRec21[i] = 0;
	for (int i=0; i<2; i++) fRec22[i] = 0;
	for (int i=0; i<2048; i++) fVec6[i] = 0;
	for (int i=0; i<2; i++) fRec23[i] = 0;
	for (int i=0; i<2; i++) fRec24[i] = 0;
	for (int i=0; i<2048; i++) fVec7[i] = 0;
	for (int i=0; i<2; i++) fRec25[i] = 0;
	for (int i=0; i<2; i++) fRec26[i] = 0;
	for (int i=0; i<2; i++) fVec8[i] = 0;
	for (int i=0; i<2; i++) fRec12[i] = 0;
	for (int i=0; i<3; i++) fRec11[i] = 0;
	for (int i=0; i<4; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec27[i] = 0;
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
	fConst28 = (4.34006467477127e-10 * fConst20);
	fConst29 = (2.77980702865717e-10 + (fConst20 * (fConst28 - 1.02288863996017e-09)));
	fConst30 = faustpower<2>(fConst20);
	fConst31 = (5.55961405731434e-10 - (8.68012934954254e-10 * fConst30));
	fConst32 = (2.77980702865717e-10 + (fConst20 * (1.02288863996017e-09 + fConst28)));
	fConst33 = (1.0 / fConst32);
	fConst34 = (4.8035841812418e-27 * fConst20);
	fConst35 = (1.51631795446102e-16 + (fConst20 * (4.41642343467837e-17 + (fConst20 * (6.82823840929032e-20 + (fConst20 * (3.24323967288973e-23 + fConst34)))))));
	fConst36 = (6.71039284842902e-28 * fConst20);
	fConst37 = (fConst20 * (1.90842177598527e-24 + (fConst20 * (9.08011692659111e-25 + fConst36))));
	fConst38 = ((fConst20 * ((fConst20 * (0 - (1.20997937083842e-24 + fConst36))) - 3.94420578609516e-24)) - 3.53411439997273e-24);
	fConst39 = (3.35519642421451e-26 * fConst20);
	fConst40 = ((fConst20 * ((fConst20 * (0 - (5.80698043531545e-23 + fConst39))) - 1.99881254160991e-22)) - 1.96339688887374e-22);
	fConst41 = (7.14378925263479e-28 * fConst20);
	fConst42 = (fConst20 * ((fConst20 * ((fConst20 * (0 - (2.37656745592405e-24 + fConst41))) - 1.76465293140627e-21)) - 3.70471574055323e-21));
	fConst43 = (6.46136067065721e-21 + (fConst20 * (7.46227083761308e-21 + (fConst20 * (2.33400667891811e-21 + (fConst20 * (2.69803797229261e-24 + fConst41)))))));
	fConst44 = (3.5718946263174e-26 * fConst20);
	fConst45 = (3.80780002690664e-19 + (fConst20 * (3.88064144039659e-19 + (fConst20 * (1.12928826573142e-19 + (fConst20 * (1.33507144219663e-22 + fConst44)))))));
	fConst46 = (9.6071683624836e-29 * fConst20);
	fConst47 = (fConst20 * ((fConst20 * ((fConst20 * ((fConst20 * (0 - (6.44297422088581e-25 + fConst46))) - 1.30587727530285e-21)) - 7.97538480262289e-19)) - 1.67330797338641e-18));
	fConst48 = (3.0581393966094e-18 + (fConst20 * (3.43335297117683e-18 + (fConst20 * (1.05835115629299e-18 + (fConst20 * (1.5310588345637e-21 + (fConst20 * (6.87529679719757e-25 + fConst46)))))))));
	fConst49 = (2.74146095019104e-23 * fConst20);
	fConst50 = ((fConst20 * (8.26702779868721e-20 - fConst49)) - 1.8276406334607e-17);
	fConst51 = (8.22438285057313e-26 * fConst20);
	fConst52 = (4.67876002165938e-20 + (fConst20 * (fConst51 - 2.31927596386162e-22)));
	fConst53 = (4.82497127233624e-26 * fConst20);
	fConst54 = (2.41248563616812e-23 - fConst53);
	fConst55 = (9.64994254467247e-28 * fConst20);
	fConst56 = (fConst20 * (1.46211250676856e-24 - fConst55));
	fConst57 = (7.31056253384278e-22 + (fConst20 * (fConst55 - 1.89635992127882e-24)));
	fConst58 = (1.64487657011463e-27 * fConst20);
	fConst59 = (fConst20 * (3.5666683877233e-21 + (fConst20 * (fConst58 - 5.64375427612663e-24))));
	fConst60 = (1.41780606716951e-18 + (fConst20 * ((fConst20 * (6.38394873267821e-24 - fConst58)) - 5.22543502665222e-21)));
	fConst61 = (5.48292190038209e-25 * fConst20);
	fConst62 = (fConst20 * ((fConst20 * (1.98847300920524e-21 - fConst61)) - 1.35134640777094e-18));
	fConst63 = ((fConst20 * (1.95251833347061e-18 + (fConst20 * (fConst61 - 2.23520449472243e-21)))) - 5.5383049498809e-16);
	fConst64 = ((fConst20 * (4.41642343467837e-17 + (fConst20 * ((fConst20 * (3.24323967288973e-23 - fConst34)) - 6.82823840929032e-20)))) - 1.51631795446102e-16);
	fConst65 = (fConst20 * (1.90842177598527e-24 + (fConst20 * (fConst36 - 9.08011692659111e-25))));
	fConst66 = (3.53411439997273e-24 + (fConst20 * ((fConst20 * (1.20997937083842e-24 - fConst36)) - 3.94420578609516e-24)));
	fConst67 = ((fConst20 * (1.99881254160991e-22 + (fConst20 * (fConst39 - 5.80698043531545e-23)))) - 1.96339688887374e-22);
	fConst68 = (fConst20 * (3.70471574055323e-21 + (fConst20 * ((fConst20 * (2.37656745592405e-24 - fConst41)) - 1.76465293140627e-21))));
	fConst69 = (6.46136067065721e-21 + (fConst20 * ((fConst20 * (2.33400667891811e-21 + (fConst20 * (fConst41 - 2.69803797229261e-24)))) - 7.46227083761308e-21)));
	fConst70 = ((fConst20 * (3.88064144039659e-19 + (fConst20 * ((fConst20 * (1.33507144219663e-22 - fConst44)) - 1.12928826573142e-19)))) - 3.80780002690664e-19);
	fConst71 = (fConst20 * ((fConst20 * (7.97538480262289e-19 + (fConst20 * ((fConst20 * (6.44297422088581e-25 - fConst46)) - 1.30587727530285e-21)))) - 1.67330797338641e-18));
	fConst72 = ((fConst20 * (3.43335297117683e-18 + (fConst20 * ((fConst20 * (1.5310588345637e-21 + (fConst20 * (fConst46 - 6.87529679719757e-25)))) - 1.05835115629299e-18)))) - 3.0581393966094e-18);
	fConst73 = (1.92143367249672e-26 * fConst20);
	fConst74 = ((fConst20 * (8.83284686935675e-17 + (fConst30 * (fConst73 - 6.48647934577946e-23)))) - 6.0652718178441e-16);
	fConst75 = (4.02623570905741e-27 * fConst20);
	fConst76 = ((fConst20 * (3.63204677063645e-24 - fConst75)) - 3.81684355197054e-24);
	fConst77 = (7.88841157219032e-24 + (fConst20 * (fConst75 - 4.83991748335367e-24)));
	fConst78 = (1.3420785696858e-25 * fConst20);
	fConst79 = ((fConst30 * (1.16139608706309e-22 - fConst78)) - 3.92679377774747e-22);
	fConst80 = (4.28627355158087e-27 * fConst20);
	fConst81 = (fConst30 * (3.52930586281253e-21 + (fConst20 * (fConst80 - 9.50626982369619e-24))));
	fConst82 = (1.29227213413144e-20 + (fConst30 * ((fConst20 * (1.07921518891705e-23 - fConst80)) - 4.66801335783623e-21)));
	fConst83 = (1.42875785052696e-25 * fConst20);
	fConst84 = ((fConst20 * (7.76128288079319e-19 + (fConst30 * (fConst83 - 2.67014288439326e-22)))) - 1.52312001076266e-18);
	fConst85 = (5.76430101749016e-28 * fConst20);
	fConst86 = (fConst20 * ((fConst30 * (2.6117545506057e-21 + (fConst20 * (fConst85 - 2.57718968835432e-24)))) - 3.34661594677283e-18));
	fConst87 = ((fConst20 * (6.86670594235366e-18 + (fConst30 * ((fConst20 * (2.75011871887903e-24 - fConst85)) - 3.06211766912741e-21)))) - 1.22325575864376e-17);
	fConst88 = (2.4017920906209e-26 * fConst20);
	fConst89 = ((fConst20 * ((fConst20 * (2.0484715227871e-19 + (fConst20 * (0 - (3.24323967288973e-23 + fConst88))))) - 4.41642343467837e-17)) - 7.58158977230512e-16);
	fConst90 = (1.00655892726435e-26 * fConst20);
	fConst91 = (fConst20 * ((fConst20 * (fConst90 - 4.54005846329556e-24)) - 1.90842177598527e-24));
	fConst92 = ((fConst20 * (3.94420578609516e-24 + (fConst20 * (6.04989685419209e-24 - fConst90)))) - 1.06023431999182e-23);
	fConst93 = (1.67759821210725e-25 * fConst20);
	fConst94 = (1.96339688887374e-22 + (fConst20 * ((fConst20 * (5.80698043531545e-23 + fConst93)) - 5.99643762482972e-22)));
	fConst95 = (1.07156838789522e-26 * fConst20);
	fConst96 = (fConst20 * ((fConst20 * (1.76465293140627e-21 + (fConst20 * (1.18828372796202e-23 - fConst95)))) - 1.11141472216597e-20));
	fConst97 = ((fConst20 * (2.23868125128392e-20 + (fConst20 * ((fConst20 * (fConst95 - 1.34901898614631e-23)) - 2.33400667891811e-21)))) - 6.46136067065721e-21);
	fConst98 = (1.7859473131587e-25 * fConst20);
	fConst99 = ((fConst20 * ((fConst20 * (3.38786479719427e-19 + (fConst20 * (0 - (1.33507144219663e-22 + fConst98))))) - 3.88064144039659e-19)) - 1.90390001345332e-18);
	fConst100 = (1.44107525437254e-27 * fConst20);
	fConst101 = (fConst20 * (1.67330797338641e-18 + (fConst20 * ((fConst20 * (1.30587727530285e-21 + (fConst20 * (3.2214871104429e-24 - fConst100)))) - 2.39261544078687e-18))));
	fConst102 = ((fConst20 * ((fConst20 * (3.17505346887898e-18 + (fConst20 * ((fConst20 * (fConst100 - 3.43764839859879e-24)) - 1.5310588345637e-21)))) - 3.43335297117683e-18)) - 1.5290696983047e-17);
	fConst103 = (1.3420785696858e-26 * fConst30);
	fConst104 = (7.63368710394109e-24 - fConst103);
	fConst105 = (fConst103 - 1.57768231443806e-23);
	fConst106 = (7.85358755549495e-22 - (2.32279217412618e-22 * fConst30));
	fConst107 = (1.42875785052696e-26 * fConst30);
	fConst108 = (fConst30 * (fConst107 - 7.05861172562507e-21));
	fConst109 = ((fConst30 * (9.33602671567245e-21 - fConst107)) - 2.58454426826288e-20);
	fConst110 = ((5.34028576878653e-22 * fConst30) - 1.55225657615864e-18);
	fConst111 = (1.92143367249672e-27 * fConst30);
	fConst112 = (6.69323189354565e-18 + (fConst30 * (fConst111 - 5.2235091012114e-21)));
	fConst113 = ((fConst30 * (6.12423533825482e-21 - fConst111)) - 1.37334118847073e-17);
	fConst114 = ((1.29729586915589e-22 * fConst30) - 1.76656937387135e-16);
	fConst115 = (7.58158977230512e-16 + (fConst20 * ((fConst20 * ((fConst20 * (fConst88 - 3.24323967288973e-23)) - 2.0484715227871e-19)) - 4.41642343467837e-17)));
	fConst116 = (fConst20 * ((fConst20 * (4.54005846329556e-24 + fConst90)) - 1.90842177598527e-24));
	fConst117 = (1.06023431999182e-23 + (fConst20 * (3.94420578609516e-24 + (fConst20 * (0 - (6.04989685419209e-24 + fConst90))))));
	fConst118 = (1.96339688887374e-22 + (fConst20 * (5.99643762482972e-22 + (fConst20 * (5.80698043531545e-23 - fConst93)))));
	fConst119 = (fConst20 * (1.11141472216597e-20 + (fConst20 * (1.76465293140627e-21 + (fConst20 * (0 - (1.18828372796202e-23 + fConst95)))))));
	fConst120 = ((fConst20 * ((fConst20 * ((fConst20 * (1.34901898614631e-23 + fConst95)) - 2.33400667891811e-21)) - 2.23868125128392e-20)) - 6.46136067065721e-21);
	fConst121 = (1.90390001345332e-18 + (fConst20 * ((fConst20 * ((fConst20 * (fConst98 - 1.33507144219663e-22)) - 3.38786479719427e-19)) - 3.88064144039659e-19)));
	fConst122 = (fConst20 * (1.67330797338641e-18 + (fConst20 * (2.39261544078687e-18 + (fConst20 * (1.30587727530285e-21 + (fConst20 * (0 - (3.2214871104429e-24 + fConst100)))))))));
	fConst123 = (1.5290696983047e-17 + (fConst20 * ((fConst20 * ((fConst20 * ((fConst20 * (3.43764839859879e-24 + fConst100)) - 1.5310588345637e-21)) - 3.17505346887898e-18)) - 3.43335297117683e-18)));
	fConst124 = (6.0652718178441e-16 + (fConst20 * (8.83284686935675e-17 + (fConst30 * (0 - (6.48647934577946e-23 + fConst73))))));
	fConst125 = ((fConst20 * (0 - (3.63204677063645e-24 + fConst75))) - 3.81684355197054e-24);
	fConst126 = (7.88841157219032e-24 + (fConst20 * (4.83991748335367e-24 + fConst75)));
	fConst127 = ((fConst30 * (1.16139608706309e-22 + fConst78)) - 3.92679377774747e-22);
	fConst128 = (fConst30 * (3.52930586281253e-21 + (fConst20 * (9.50626982369619e-24 + fConst80))));
	fConst129 = (1.29227213413144e-20 + (fConst30 * ((fConst20 * (0 - (1.07921518891705e-23 + fConst80))) - 4.66801335783623e-21)));
	fConst130 = (1.52312001076266e-18 + (fConst20 * (7.76128288079319e-19 + (fConst30 * (0 - (2.67014288439326e-22 + fConst83))))));
	fConst131 = (fConst20 * ((fConst30 * (2.6117545506057e-21 + (fConst20 * (2.57718968835432e-24 + fConst85)))) - 3.34661594677283e-18));
	fConst132 = (1.22325575864376e-17 + (fConst20 * (6.86670594235366e-18 + (fConst30 * ((fConst20 * (0 - (2.75011871887903e-24 + fConst85))) - 3.06211766912741e-21)))));
	fConst133 = (1 + fConst17);
	fConst134 = (1.0 / fConst133);
	fConst135 = (0 - ((1 - fConst17) / fConst133));
	fConst136 = (0 - fConst4);
	fConst137 = (1 + fConst4);
	fConst138 = (1.0 / fConst137);
	fConst139 = (0 - ((1 - fConst4) / fConst137));
	fConst140 = (3.28975314022925e-25 * fConst20);
	fConst141 = (4.63855192772325e-22 - fConst140);
	fConst142 = (5.78996552680348e-27 * fConst20);
	fConst143 = (fConst20 * (fConst142 - 5.84845002707423e-24));
	fConst144 = ((fConst20 * (7.58543968511527e-24 - fConst142)) - 1.46211250676856e-21);
	fConst145 = (1.92998850893449e-25 * fConst20);
	fConst146 = (fConst145 - 4.82497127233624e-23);
	fConst147 = (9.86925942068776e-27 * fConst20);
	fConst148 = ((fConst20 * (2.25750171045065e-23 - fConst147)) - 7.13333677544659e-21);
	fConst149 = (1.04508700533044e-20 + (fConst20 * (fConst147 - 2.55357949307128e-23)));
	fConst150 = (2.19316876015283e-24 * fConst20);
	fConst151 = (fConst30 * (fConst150 - 3.97694601841047e-21));
	fConst152 = ((fConst30 * (4.47040898944486e-21 - fConst150)) - 1.10766098997618e-15);
	fConst153 = ((5.48292190038209e-23 * fConst30) - 3.65528126692139e-17);
	fConst154 = (1.8276406334607e-17 + (fConst20 * (fConst49 - 2.48010833960616e-19)));
	fConst155 = (4.11219142528656e-25 * fConst20);
	fConst156 = ((fConst20 * (2.31927596386162e-22 + fConst155)) - 1.40362800649781e-19);
	fConst157 = (2.41248563616812e-25 * fConst20);
	fConst158 = (0 - (2.41248563616812e-23 + fConst157));
	fConst159 = (1.44749138170087e-26 * fConst20);
	fConst160 = (fConst20 * (7.31056253384278e-24 - fConst159));
	fConst161 = ((fConst20 * (fConst159 - 9.48179960639409e-24)) - 7.31056253384278e-22);
	fConst162 = (2.46731485517194e-26 * fConst20);
	fConst163 = (fConst20 * ((fConst20 * (fConst162 - 2.82187713806331e-23)) - 3.5666683877233e-21));
	fConst164 = ((fConst20 * (5.22543502665222e-21 + (fConst20 * (3.1919743663391e-23 - fConst162)))) - 4.25341820150853e-18);
	fConst165 = (2.74146095019104e-24 * fConst20);
	fConst166 = (fConst20 * (4.05403922331282e-18 + (fConst20 * (0 - (1.98847300920524e-21 + fConst165)))));
	fConst167 = (5.5383049498809e-16 + (fConst20 * ((fConst20 * (2.23520449472243e-21 + fConst165)) - 5.85755500041183e-18)));
	fConst168 = (7.31056253384278e-17 - (1.09658438007642e-22 * fConst30));
	fConst169 = (1.92998850893449e-26 * fConst30);
	fConst170 = (2.92422501353711e-21 - fConst169);
	fConst171 = (3.28975314022925e-26 * fConst30);
	fConst172 = (1.42666735508932e-20 - fConst171);
	fConst173 = (fConst171 - 2.09017401066089e-20);
	fConst174 = (7.95389203682095e-21 * fConst30);
	fConst175 = (2.21532197995236e-15 - (8.94081797888972e-21 * fConst30));
	fConst176 = (1.8276406334607e-17 + (fConst20 * (2.48010833960616e-19 + fConst49)));
	fConst177 = (1.40362800649781e-19 + (fConst20 * (2.31927596386162e-22 - fConst155)));
	fConst178 = (fConst20 * (0 - (7.31056253384278e-24 + fConst159)));
	fConst179 = ((fConst20 * (9.48179960639409e-24 + fConst159)) - 7.31056253384278e-22);
	fConst180 = (fConst157 - 2.41248563616812e-23);
	fConst181 = (fConst20 * ((fConst20 * (2.82187713806331e-23 + fConst162)) - 3.5666683877233e-21));
	fConst182 = (4.25341820150853e-18 + (fConst20 * (5.22543502665222e-21 + (fConst20 * (0 - (3.1919743663391e-23 + fConst162))))));
	fConst183 = (fConst20 * ((fConst20 * (fConst165 - 1.98847300920524e-21)) - 4.05403922331282e-18));
	fConst184 = (5.5383049498809e-16 + (fConst20 * (5.85755500041183e-18 + (fConst20 * (2.23520449472243e-21 - fConst165)))));
	fConst185 = (4.63855192772325e-22 + fConst140);
	fConst186 = (0 - (4.82497127233624e-23 + fConst145));
	fConst187 = (fConst20 * (5.84845002707423e-24 + fConst142));
	fConst188 = ((fConst20 * (0 - (7.58543968511527e-24 + fConst142))) - 1.46211250676856e-21);
	fConst189 = ((fConst20 * (0 - (2.25750171045065e-23 + fConst147))) - 7.13333677544659e-21);
	fConst190 = (1.04508700533044e-20 + (fConst20 * (2.55357949307128e-23 + fConst147)));
	fConst191 = (fConst30 * (0 - (3.97694601841047e-21 + fConst150)));
	fConst192 = ((fConst30 * (4.47040898944486e-21 + fConst150)) - 1.10766098997618e-15);
	fConst193 = ((fConst20 * (0 - (8.26702779868721e-20 + fConst49))) - 1.8276406334607e-17);
	fConst194 = ((fConst20 * (0 - (2.31927596386162e-22 + fConst51))) - 4.67876002165938e-20);
	fConst195 = (2.41248563616812e-23 + fConst53);
	fConst196 = (fConst20 * (0 - (1.46211250676856e-24 + fConst55)));
	fConst197 = (7.31056253384278e-22 + (fConst20 * (1.89635992127882e-24 + fConst55)));
	fConst198 = (fConst20 * (3.5666683877233e-21 + (fConst20 * (5.64375427612663e-24 + fConst58))));
	fConst199 = ((fConst20 * ((fConst20 * (0 - (6.38394873267821e-24 + fConst58))) - 5.22543502665222e-21)) - 1.41780606716951e-18);
	fConst200 = (fConst20 * (1.35134640777094e-18 + (fConst20 * (1.98847300920524e-21 + fConst61))));
	fConst201 = ((fConst20 * ((fConst20 * (0 - (2.23520449472243e-21 + fConst61))) - 1.95251833347061e-18)) - 5.5383049498809e-16);
	fConst202 = (fConst30 / fConst32);
	fConst203 = tan((20461.192952830323 / double(iConst0)));
	fConst204 = (2 * (1 - (1.0 / faustpower<2>(fConst203))));
	fConst205 = (1.0 / fConst203);
	fConst206 = (1 + ((fConst205 - 1.0000000000000004) / fConst203));
	fConst207 = (1.0 / (1 + ((1.0000000000000004 + fConst205) / fConst203)));
	IOTA = 0;
	fConst208 = (1 + fConst205);
	fConst209 = (2.0 / fConst208);
	fConst210 = (0 - ((1 - fConst205) / fConst208));
	fConst211 = (7.10269964334188e-17 * fConst20);
	fConst212 = (0 - (3.31899550200126e-10 + fConst211));
	fConst213 = (2.13080989300256e-16 * fConst20);
	fConst214 = (3.31899550200126e-10 + fConst213);
	fConst215 = (3.31899550200126e-10 - fConst213);
	fConst216 = (fConst211 - 3.31899550200126e-10);
	fConst217 = (fConst30 / fConst26);
	fConst218 = (1256.6370614359173 * fConst10);
	fConst219 = (1 + ((fConst12 - fConst218) / fConst7));
	fConst220 = (1 + ((fConst218 + fConst12) / fConst7));
	fConst221 = (2 * (0 - fConst2));
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

double always_inline Dsp::symclip(double x) {
    double f = fabs(x);
    f = (f - clip.low) * clip.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = clip.data[0];
    } else if (i >= clip.size-1) {
        f = clip.data[clip.size-1];
    } else {
	f -= i;
	f = clip.data[i]*(1-f) + clip.data[i+1]*f;
    }
    return copysign(f, x);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
#define fslider3 (*fslider3_)
#define fslider4 (*fslider4_)
#define fslider5 (*fslider5_)
#define fslider6 (*fslider6_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	double 	fSlow2 = (0.007000000000000006 * double(fslider2));
	double 	fSlow3 = double(fslider3);
	double 	fSlow4 = (fConst202 * (1 - fSlow3));
	double 	fSlow5 = (0.06 * double(fslider4));
	int 	iSlow6 = int(double(fslider5));
	double 	fSlow7 = (0.007000000000000006 * double(fslider6));
	for (int i=0; i<count; i++) {
		double fTemp0 = (fConst8 * fRec1[1]);
		fRec4[0] = ((0.993 * fRec4[1]) + fSlow0);
		double fTemp1 = (0 - (3.76715899707302e-09 * fRec4[0]));
		fRec6[0] = ((0.993 * fRec6[1]) + fSlow1);
		fRec7[0] = ((0.993 * fRec7[1]) + fSlow2);
		double fTemp2 = (1.48742188551041e-16 + (fConst20 * (((fRec6[0] * (fConst48 + (fConst47 * fRec6[0]))) + (fRec7[0] * (fConst45 + (fConst20 * ((fRec6[0] * (fConst43 + (fConst42 * fRec6[0]))) + (fRec7[0] * (fConst40 + (fConst20 * (fRec6[0] * (fConst38 + (fConst37 * fRec6[0]))))))))))) + fConst35)));
		double fTemp3 = (double)input0[i];
		fVec0[0] = fTemp3;
		fRec10[0] = ((fConst135 * fRec10[1]) + (fConst134 * (fVec0[0] + fVec0[1])));
		fRec9[0] = ((fConst139 * fRec9[1]) + (fConst138 * ((fConst4 * fRec10[0]) + (fConst136 * fRec10[1]))));
		fRec8[0] = (fRec9[0] - (((((((fRec8[1] * (8.92453131306244e-16 + (fConst20 * (((fRec6[0] * (fConst132 + (fConst131 * fRec6[0]))) + (fRec7[0] * (fConst130 + (fConst20 * ((fRec6[0] * (fConst129 + (fConst128 * fRec6[0]))) + (fRec7[0] * (fConst127 + (fConst30 * (fRec6[0] * (fConst126 + (fConst125 * fRec6[0]))))))))))) + fConst124)))) + (fRec8[2] * (2.23113282826561e-15 + (fConst20 * (((fRec6[0] * (fConst123 + (fConst122 * fRec6[0]))) + (fRec7[0] * (fConst121 + (fConst20 * ((fRec6[0] * (fConst120 + (fConst119 * fRec6[0]))) + (fRec7[0] * (fConst118 + (fConst20 * (fRec6[0] * (fConst117 + (fConst116 * fRec6[0]))))))))))) + fConst115))))) + (fRec8[3] * (2.97484377102081e-15 + (fConst30 * (fConst114 + ((fRec6[0] * (fConst113 + (fConst112 * fRec6[0]))) + (fRec7[0] * (fConst110 + ((fRec6[0] * (fConst109 + (fConst108 * fRec6[0]))) + (fRec7[0] * (fConst106 + (fConst30 * (fRec6[0] * (fConst105 + (fConst104 * fRec6[0]))))))))))))))) + (fRec8[4] * (2.23113282826561e-15 + (fConst20 * (((fRec6[0] * (fConst102 + (fConst101 * fRec6[0]))) + (fRec7[0] * (fConst99 + (fConst20 * ((fRec6[0] * (fConst97 + (fConst96 * fRec6[0]))) + (fRec7[0] * (fConst94 + (fConst20 * (fRec6[0] * (fConst92 + (fConst91 * fRec6[0]))))))))))) + fConst89))))) + (fRec8[5] * (8.92453131306244e-16 + (fConst20 * (((fRec6[0] * (fConst87 + (fConst86 * fRec6[0]))) + (fRec7[0] * (fConst84 + (fConst20 * ((fRec6[0] * (fConst82 + (fConst81 * fRec6[0]))) + (fRec7[0] * (fConst79 + (fConst30 * (fRec6[0] * (fConst77 + (fConst76 * fRec6[0]))))))))))) + fConst74))))) + (fRec8[6] * (1.48742188551041e-16 + (fConst20 * (((fRec6[0] * (fConst72 + (fConst71 * fRec6[0]))) + (fRec7[0] * (fConst70 + (fConst20 * ((fRec6[0] * (fConst69 + (fConst68 * fRec6[0]))) + (fRec7[0] * (fConst67 + (fConst20 * (fRec6[0] * (fConst66 + (fConst65 * fRec6[0]))))))))))) + fConst64))))) / fTemp2));
		fRec5[0] = ((fConst30 * ((((((((fRec8[0] * (((fRec6[0] * (fConst201 + (fConst200 * fRec6[0]))) + (fConst20 * (fRec7[0] * (((fRec6[0] * (fConst199 + (fConst198 * fRec6[0]))) + (fConst20 * (fRec7[0] * ((fRec6[0] * (fConst197 + (fConst196 * fRec6[0]))) + fConst195)))) + fConst194)))) + fConst193)) + (fRec8[1] * (fConst153 + ((fRec6[0] * (fConst192 + (fConst191 * fRec6[0]))) + (fConst30 * (fRec7[0] * (((fRec6[0] * (fConst190 + (fConst189 * fRec6[0]))) + (fRec7[0] * ((fRec6[0] * (fConst188 + (fConst187 * fRec6[0]))) + fConst186))) + fConst185))))))) + (fRec8[2] * (((fRec6[0] * (fConst184 + (fConst183 * fRec6[0]))) + (fConst20 * (fRec7[0] * (((fRec6[0] * (fConst182 + (fConst181 * fRec6[0]))) + (fConst20 * (fRec7[0] * (fConst180 + (fRec6[0] * (fConst179 + (fConst178 * fRec6[0]))))))) + fConst177)))) + fConst176))) + (fRec8[3] * (((fRec6[0] * (fConst175 + (fConst174 * fRec6[0]))) + (fConst30 * (fRec7[0] * (((fRec6[0] * (fConst173 + (fConst172 * fRec6[0]))) + (fRec7[0] * (9.64994254467247e-23 + (fRec6[0] * (fConst170 + (fConst169 * fRec6[0])))))) - 9.27710385544649e-22)))) + fConst168))) + (fRec8[4] * (((fRec6[0] * (fConst167 + (fConst166 * fRec6[0]))) + (fConst20 * (fRec7[0] * (((fRec6[0] * (fConst164 + (fConst163 * fRec6[0]))) + (fConst20 * (fRec7[0] * ((fRec6[0] * (fConst161 + (fConst160 * fRec6[0]))) + fConst158)))) + fConst156)))) + fConst154))) + (fRec8[5] * (fConst153 + ((fRec6[0] * (fConst152 + (fConst151 * fRec6[0]))) + (fConst30 * (fRec7[0] * (((fRec6[0] * (fConst149 + (fConst148 * fRec6[0]))) + (fRec7[0] * (fConst146 + (fRec6[0] * (fConst144 + (fConst143 * fRec6[0])))))) + fConst141))))))) + (fRec8[6] * (((fRec6[0] * (fConst63 + (fConst62 * fRec6[0]))) + (fConst20 * (fRec7[0] * (((fRec6[0] * (fConst60 + (fConst59 * fRec6[0]))) + (fConst20 * (fRec7[0] * ((fRec6[0] * (fConst57 + (fConst56 * fRec6[0]))) + fConst54)))) + fConst52)))) + fConst50))) / fTemp2)) - (fConst33 * ((fConst31 * fRec5[1]) + (fConst29 * fRec5[2]))));
		double fTemp4 = (((fRec5[0] * fTemp1) + (7.53431799414604e-09 * (fRec4[0] * fRec5[1]))) + (fRec5[2] * fTemp1));
		double fTemp5 = ((fSlow4 * fTemp4) + (fSlow3 * symclip((fConst202 * fTemp4))));
		double fTemp6 = ((0.7 * fRec19[1]) + (fSlow5 * fTemp5));
		fVec1[IOTA&511] = fTemp6;
		fRec19[0] = fVec1[(IOTA-346)&511];
		double 	fRec20 = (0 - (0.7 * fVec1[IOTA&511]));
		double fTemp7 = (fRec19[1] + (fRec20 + (0.7 * fRec17[1])));
		fVec2[IOTA&127] = fTemp7;
		fRec17[0] = fVec2[(IOTA-112)&127];
		double 	fRec18 = (0 - (0.7 * fVec2[IOTA&127]));
		double fTemp8 = (fRec17[1] + (fRec18 + (0.7 * fRec15[1])));
		fVec3[IOTA&63] = fTemp8;
		fRec15[0] = fVec3[(IOTA-36)&63];
		double 	fRec16 = (0 - (0.7 * fVec3[IOTA&63]));
		double fTemp9 = (fRec16 + fRec15[1]);
		double fTemp10 = (fTemp9 + (0.733 * fRec13[1]));
		fVec4[IOTA&4095] = fTemp10;
		fRec13[0] = fVec4[(IOTA-2250)&4095];
		fRec14[0] = fVec4[IOTA&4095];
		double fTemp11 = (fTemp9 + (0.753 * fRec21[1]));
		fVec5[IOTA&4095] = fTemp11;
		fRec21[0] = fVec5[(IOTA-2052)&4095];
		fRec22[0] = fVec5[IOTA&4095];
		double fTemp12 = (fTemp9 + (0.773 * fRec23[1]));
		fVec6[IOTA&2047] = fTemp12;
		fRec23[0] = fVec6[(IOTA-1866)&2047];
		fRec24[0] = fVec6[IOTA&2047];
		double fTemp13 = (fRec15[1] + (fRec16 + (0.802 * fRec25[1])));
		fVec7[IOTA&2047] = fTemp13;
		fRec25[0] = fVec7[(IOTA-1600)&2047];
		fRec26[0] = fVec7[IOTA&2047];
		double fTemp14 = (((fRec26[1] + fRec24[1]) + fRec22[1]) + fRec14[1]);
		double fTemp15 = (fTemp14 + fTemp14);
		fVec8[0] = fTemp15;
		fRec12[0] = ((fConst210 * fRec12[1]) + (fConst209 * (fVec8[0] + fVec8[1])));
		fRec11[0] = (fRec12[0] - (fConst207 * ((fConst206 * fRec11[2]) + (fConst204 * fRec11[1]))));
		fRec3[0] = (((iSlow6==0)? fTemp5 : ((iSlow6==1)?(fTemp5 + (fConst207 * (fRec11[2] + (fRec11[0] + (2 * fRec11[1]))))):fTemp5) ) - (fConst27 * (((fConst25 * fRec3[1]) + (fConst24 * fRec3[2])) + (fConst22 * fRec3[3]))));
		fRec27[0] = ((0.993 * fRec27[1]) + fSlow7);
		fRec2[0] = ((fConst217 * (fRec27[0] * ((((fConst216 * fRec3[0]) + (fConst215 * fRec3[1])) + (fConst214 * fRec3[2])) + (fConst212 * fRec3[3])))) - (fConst19 * ((fConst18 * fRec2[2]) + (fConst16 * fRec2[1]))));
		fRec1[0] = ((fConst19 * (fRec2[2] + (fRec2[0] + (2 * fRec2[1])))) - (fConst14 * ((fConst13 * fRec1[2]) + fTemp0)));
		fRec0[0] = ((fConst14 * ((fTemp0 + (fConst220 * fRec1[0])) + (fConst219 * fRec1[2]))) - (fConst6 * ((fConst5 * fRec0[2]) + (fConst3 * fRec0[1]))));
		output0[i] = (FAUSTFLOAT)(fConst6 * (((fConst2 * fRec0[0]) + (fConst221 * fRec0[1])) + (fConst2 * fRec0[2])));
		// post processing
		fRec0[2] = fRec0[1]; fRec0[1] = fRec0[0];
		fRec1[2] = fRec1[1]; fRec1[1] = fRec1[0];
		fRec2[2] = fRec2[1]; fRec2[1] = fRec2[0];
		fRec27[1] = fRec27[0];
		for (int i=3; i>0; i--) fRec3[i] = fRec3[i-1];
		fRec11[2] = fRec11[1]; fRec11[1] = fRec11[0];
		fRec12[1] = fRec12[0];
		fVec8[1] = fVec8[0];
		fRec26[1] = fRec26[0];
		fRec25[1] = fRec25[0];
		fRec24[1] = fRec24[0];
		fRec23[1] = fRec23[0];
		fRec22[1] = fRec22[0];
		fRec21[1] = fRec21[0];
		fRec14[1] = fRec14[0];
		fRec13[1] = fRec13[0];
		fRec15[1] = fRec15[0];
		fRec17[1] = fRec17[0];
		fRec19[1] = fRec19[0];
		IOTA = IOTA+1;
		fRec5[2] = fRec5[1]; fRec5[1] = fRec5[0];
		for (int i=6; i>0; i--) fRec8[i] = fRec8[i-1];
		fRec9[1] = fRec9[0];
		fRec10[1] = fRec10[0];
		fVec0[1] = fVec0[0];
		fRec7[1] = fRec7[0];
		fRec6[1] = fRec6[0];
		fRec4[1] = fRec4[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
#undef fslider3
#undef fslider4
#undef fslider5
#undef fslider6
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
	case CLIPPING: 
		fslider3_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case GAIN: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case REVERBLEVEL: 
		fslider4_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	// static const value_pair fslider5_values[] = {{"ON"},{"OFF"},{0}};
	case REVERB: 
		fslider5_ = (float*)data; // , 2.0, 0.0, 2.0, 1.0 
		break;
	case TREBLE: 
		fslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fslider6_ = (float*)data; // , 0.25, 0.0, 1.0, 0.01 
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
   CLIPPING, 
   GAIN, 
   REVERBLEVEL, 
   REVERB, 
   TREBLE, 
   VOLUME, 
} PortIndex;
*/

} // end namespace uvox
