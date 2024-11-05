#include <iostream>
#include <ctime>
#include <bitset>
#include <string>
#include <fstream>

using namespace std;
const unsigned PatternNum = 16;

void evaluate();
void printIO(unsigned idx);

bitset<PatternNum> G_1GAT_0[2];
bitset<PatternNum> G_8GAT_1[2];
bitset<PatternNum> G_13GAT_2[2];
bitset<PatternNum> G_17GAT_3[2];
bitset<PatternNum> G_26GAT_4[2];
bitset<PatternNum> G_29GAT_5[2];
bitset<PatternNum> G_36GAT_6[2];
bitset<PatternNum> G_42GAT_7[2];
bitset<PatternNum> G_51GAT_8[2];
bitset<PatternNum> G_55GAT_9[2];
bitset<PatternNum> G_59GAT_10[2];
bitset<PatternNum> G_68GAT_11[2];
bitset<PatternNum> G_72GAT_12[2];
bitset<PatternNum> G_73GAT_13[2];
bitset<PatternNum> G_74GAT_14[2];
bitset<PatternNum> G_75GAT_15[2];
bitset<PatternNum> G_80GAT_16[2];
bitset<PatternNum> G_85GAT_17[2];
bitset<PatternNum> G_86GAT_18[2];
bitset<PatternNum> G_87GAT_19[2];
bitset<PatternNum> G_88GAT_20[2];
bitset<PatternNum> G_89GAT_21[2];
bitset<PatternNum> G_90GAT_22[2];
bitset<PatternNum> G_91GAT_23[2];
bitset<PatternNum> G_96GAT_24[2];
bitset<PatternNum> G_101GAT_25[2];
bitset<PatternNum> G_106GAT_26[2];
bitset<PatternNum> G_111GAT_27[2];
bitset<PatternNum> G_116GAT_28[2];
bitset<PatternNum> G_121GAT_29[2];
bitset<PatternNum> G_126GAT_30[2];
bitset<PatternNum> G_130GAT_31[2];
bitset<PatternNum> G_135GAT_32[2];
bitset<PatternNum> G_138GAT_33[2];
bitset<PatternNum> G_143GAT_34[2];
bitset<PatternNum> G_146GAT_35[2];
bitset<PatternNum> G_149GAT_36[2];
bitset<PatternNum> G_152GAT_37[2];
bitset<PatternNum> G_153GAT_38[2];
bitset<PatternNum> G_156GAT_39[2];
bitset<PatternNum> G_159GAT_40[2];
bitset<PatternNum> G_165GAT_41[2];
bitset<PatternNum> G_171GAT_42[2];
bitset<PatternNum> G_177GAT_43[2];
bitset<PatternNum> G_183GAT_44[2];
bitset<PatternNum> G_189GAT_45[2];
bitset<PatternNum> G_195GAT_46[2];
bitset<PatternNum> G_201GAT_47[2];
bitset<PatternNum> G_207GAT_48[2];
bitset<PatternNum> G_210GAT_49[2];
bitset<PatternNum> G_219GAT_50[2];
bitset<PatternNum> G_228GAT_51[2];
bitset<PatternNum> G_237GAT_52[2];
bitset<PatternNum> G_246GAT_53[2];
bitset<PatternNum> G_255GAT_54[2];
bitset<PatternNum> G_259GAT_55[2];
bitset<PatternNum> G_260GAT_56[2];
bitset<PatternNum> G_261GAT_57[2];
bitset<PatternNum> G_267GAT_58[2];
bitset<PatternNum> G_268GAT_59[2];
bitset<PatternNum> G_PO_388GAT_133[2];
bitset<PatternNum> G_388GAT_133[2];
bitset<PatternNum> G_PO_389GAT_132[2];
bitset<PatternNum> G_389GAT_132[2];
bitset<PatternNum> G_PO_390GAT_131[2];
bitset<PatternNum> G_390GAT_131[2];
bitset<PatternNum> G_PO_391GAT_124[2];
bitset<PatternNum> G_391GAT_124[2];
bitset<PatternNum> G_PO_418GAT_168[2];
bitset<PatternNum> G_418GAT_168[2];
bitset<PatternNum> G_PO_419GAT_164[2];
bitset<PatternNum> G_419GAT_164[2];
bitset<PatternNum> G_PO_420GAT_158[2];
bitset<PatternNum> G_420GAT_158[2];
bitset<PatternNum> G_PO_421GAT_162[2];
bitset<PatternNum> G_421GAT_162[2];
bitset<PatternNum> G_PO_422GAT_161[2];
bitset<PatternNum> G_422GAT_161[2];
bitset<PatternNum> G_PO_423GAT_155[2];
bitset<PatternNum> G_423GAT_155[2];
bitset<PatternNum> G_PO_446GAT_183[2];
bitset<PatternNum> G_446GAT_183[2];
bitset<PatternNum> G_PO_447GAT_182[2];
bitset<PatternNum> G_447GAT_182[2];
bitset<PatternNum> G_PO_448GAT_179[2];
bitset<PatternNum> G_448GAT_179[2];
bitset<PatternNum> G_PO_449GAT_176[2];
bitset<PatternNum> G_449GAT_176[2];
bitset<PatternNum> G_PO_450GAT_173[2];
bitset<PatternNum> G_450GAT_173[2];
bitset<PatternNum> G_PO_767GAT_349[2];
bitset<PatternNum> G_767GAT_349[2];
bitset<PatternNum> G_PO_768GAT_334[2];
bitset<PatternNum> G_768GAT_334[2];
bitset<PatternNum> G_PO_850GAT_404[2];
bitset<PatternNum> G_850GAT_404[2];
bitset<PatternNum> G_PO_863GAT_424[2];
bitset<PatternNum> G_863GAT_424[2];
bitset<PatternNum> G_PO_864GAT_423[2];
bitset<PatternNum> G_864GAT_423[2];
bitset<PatternNum> G_PO_865GAT_422[2];
bitset<PatternNum> G_865GAT_422[2];
bitset<PatternNum> G_PO_866GAT_426[2];
bitset<PatternNum> G_866GAT_426[2];
bitset<PatternNum> G_PO_874GAT_433[2];
bitset<PatternNum> G_874GAT_433[2];
bitset<PatternNum> G_PO_878GAT_442[2];
bitset<PatternNum> G_878GAT_442[2];
bitset<PatternNum> G_PO_879GAT_441[2];
bitset<PatternNum> G_879GAT_441[2];
bitset<PatternNum> G_PO_880GAT_440[2];
bitset<PatternNum> G_880GAT_440[2];
bitset<PatternNum> G_290GAT_100[2];
bitset<PatternNum> G_291GAT_99[2];
bitset<PatternNum> G_292GAT_98[2];
bitset<PatternNum> G_297GAT_89[2];
bitset<PatternNum> G_342GAT_141[2];
bitset<PatternNum> G_344GAT_136[2];
bitset<PatternNum> G_351GAT_125[2];
bitset<PatternNum> G_353GAT_130[2];
bitset<PatternNum> G_354GAT_129[2];
bitset<PatternNum> G_356GAT_122[2];
bitset<PatternNum> G_392GAT_167[2];
bitset<PatternNum> G_399GAT_166[2];
bitset<PatternNum> G_401GAT_163[2];
bitset<PatternNum> G_402GAT_159[2];
bitset<PatternNum> G_403GAT_156[2];
bitset<PatternNum> G_660GAT_315[2];
bitset<PatternNum> G_661GAT_293[2];
bitset<PatternNum> G_840GAT_393[2];
bitset<PatternNum> G_855GAT_418[2];
bitset<PatternNum> G_856GAT_417[2];
bitset<PatternNum> G_857GAT_416[2];
bitset<PatternNum> G_858GAT_420[2];
bitset<PatternNum> G_870GAT_429[2];
bitset<PatternNum> G_875GAT_439[2];
bitset<PatternNum> G_876GAT_438[2];
bitset<PatternNum> G_877GAT_437[2];
bitset<PatternNum> G_310GAT_60[2];
bitset<PatternNum> G_341GAT_61[2];
bitset<PatternNum> G_339GAT_62[2];
bitset<PatternNum> G_337GAT_63[2];
bitset<PatternNum> G_331GAT_64[2];
bitset<PatternNum> G_201GAT_47b[2];
bitset<PatternNum> G_195GAT_46b[2];
bitset<PatternNum> G_330GAT_65[2];
bitset<PatternNum> G_329GAT_66[2];
bitset<PatternNum> G_189GAT_45b[2];
bitset<PatternNum> G_183GAT_44b[2];
bitset<PatternNum> G_328GAT_67[2];
bitset<PatternNum> G_327GAT_68[2];
bitset<PatternNum> G_177GAT_43b[2];
bitset<PatternNum> G_171GAT_42b[2];
bitset<PatternNum> G_326GAT_69[2];
bitset<PatternNum> G_325GAT_70[2];
bitset<PatternNum> G_165GAT_41b[2];
bitset<PatternNum> G_159GAT_40b[2];
bitset<PatternNum> G_324GAT_71[2];
bitset<PatternNum> G_318GAT_72[2];
bitset<PatternNum> G_340GAT_73[2];
bitset<PatternNum> G_308GAT_74[2];
bitset<PatternNum> G_126GAT_30b[2];
bitset<PatternNum> G_121GAT_29b[2];
bitset<PatternNum> G_307GAT_75[2];
bitset<PatternNum> G_338GAT_76[2];
bitset<PatternNum> G_336GAT_77[2];
bitset<PatternNum> G_306GAT_78[2];
bitset<PatternNum> G_116GAT_28b[2];
bitset<PatternNum> G_111GAT_27b[2];
bitset<PatternNum> G_305GAT_79[2];
bitset<PatternNum> G_335GAT_80[2];
bitset<PatternNum> G_334GAT_81[2];
bitset<PatternNum> G_304GAT_82[2];
bitset<PatternNum> G_106GAT_26b[2];
bitset<PatternNum> G_101GAT_25b[2];
bitset<PatternNum> G_303GAT_83[2];
bitset<PatternNum> G_333GAT_84[2];
bitset<PatternNum> G_332GAT_85[2];
bitset<PatternNum> G_302GAT_86[2];
bitset<PatternNum> G_96GAT_24b[2];
bitset<PatternNum> G_91GAT_23b[2];
bitset<PatternNum> G_301GAT_87[2];
bitset<PatternNum> G_298GAT_88[2];
bitset<PatternNum> G_88GAT_20b[2];
bitset<PatternNum> G_87GAT_19b[2];
bitset<PatternNum> G_319GAT_90[2];
bitset<PatternNum> G_293GAT_91[2];
bitset<PatternNum> G_286GAT_92[2];
bitset<PatternNum> G_316GAT_93[2];
bitset<PatternNum> G_294GAT_94[2];
bitset<PatternNum> G_284GAT_95[2];
bitset<PatternNum> G_296GAT_96[2];
bitset<PatternNum> G_295GAT_97[2];
bitset<PatternNum> G_287GAT_101[2];
bitset<PatternNum> G_285GAT_102[2];
bitset<PatternNum> G_273GAT_103[2];
bitset<PatternNum> G_323GAT_104[2];
bitset<PatternNum> G_322GAT_105[2];
bitset<PatternNum> G_42GAT_7b[2];
bitset<PatternNum> G_17GAT_3b[2];
bitset<PatternNum> G_317GAT_106[2];
bitset<PatternNum> G_309GAT_107[2];
bitset<PatternNum> G_280GAT_108[2];
bitset<PatternNum> G_279GAT_109[2];
bitset<PatternNum> G_276GAT_110[2];
bitset<PatternNum> G_270GAT_111[2];
bitset<PatternNum> G_269GAT_112[2];
bitset<PatternNum> G_369GAT_113[2];
bitset<PatternNum> G_385GAT_114[2];
bitset<PatternNum> G_382GAT_115[2];
bitset<PatternNum> G_379GAT_116[2];
bitset<PatternNum> G_376GAT_117[2];
bitset<PatternNum> G_366GAT_118[2];
bitset<PatternNum> G_363GAT_119[2];
bitset<PatternNum> G_360GAT_120[2];
bitset<PatternNum> G_357GAT_121[2];
bitset<PatternNum> G_355GAT_123[2];
bitset<PatternNum> G_350GAT_126[2];
bitset<PatternNum> G_286GAT_92b[2];
bitset<PatternNum> G_280GAT_108b[2];
bitset<PatternNum> G_352GAT_127[2];
bitset<PatternNum> G_348GAT_128[2];
bitset<PatternNum> G_284GAT_95b[2];
bitset<PatternNum> G_349GAT_134[2];
bitset<PatternNum> G_285GAT_102b[2];
bitset<PatternNum> G_343GAT_135[2];
bitset<PatternNum> G_273GAT_103b[2];
bitset<PatternNum> G_270GAT_111b[2];
bitset<PatternNum> G_375GAT_137[2];
bitset<PatternNum> G_323GAT_104b[2];
bitset<PatternNum> G_322GAT_105b[2];
bitset<PatternNum> G_347GAT_138[2];
bitset<PatternNum> G_345GAT_139[2];
bitset<PatternNum> G_346GAT_140[2];
bitset<PatternNum> G_417GAT_142[2];
bitset<PatternNum> G_415GAT_143[2];
bitset<PatternNum> G_416GAT_144[2];
bitset<PatternNum> G_414GAT_145[2];
bitset<PatternNum> G_412GAT_146[2];
bitset<PatternNum> G_413GAT_147[2];
bitset<PatternNum> G_411GAT_148[2];
bitset<PatternNum> G_408GAT_149[2];
bitset<PatternNum> G_409GAT_150[2];
bitset<PatternNum> G_407GAT_151[2];
bitset<PatternNum> G_405GAT_152[2];
bitset<PatternNum> G_406GAT_153[2];
bitset<PatternNum> G_404GAT_154[2];
bitset<PatternNum> G_400GAT_157[2];
bitset<PatternNum> G_410GAT_160[2];
bitset<PatternNum> G_393GAT_165[2];
bitset<PatternNum> G_343GAT_135b[2];
bitset<PatternNum> G_445GAT_169[2];
bitset<PatternNum> G_444GAT_170[2];
bitset<PatternNum> G_426GAT_171[2];
bitset<PatternNum> G_425GAT_172[2];
bitset<PatternNum> G_424GAT_174[2];
bitset<PatternNum> G_442GAT_175[2];
bitset<PatternNum> G_437GAT_177[2];
bitset<PatternNum> G_427GAT_178[2];
bitset<PatternNum> G_443GAT_180[2];
bitset<PatternNum> G_432GAT_181[2];
bitset<PatternNum> G_488GAT_184[2];
bitset<PatternNum> G_437GAT_177b[2];
bitset<PatternNum> G_369GAT_113b[2];
bitset<PatternNum> G_489GAT_185[2];
bitset<PatternNum> G_490GAT_186[2];
bitset<PatternNum> G_491GAT_187[2];
bitset<PatternNum> G_476GAT_188[2];
bitset<PatternNum> G_478GAT_189[2];
bitset<PatternNum> G_480GAT_190[2];
bitset<PatternNum> G_482GAT_191[2];
bitset<PatternNum> G_495GAT_192[2];
bitset<PatternNum> G_445GAT_169b[2];
bitset<PatternNum> G_416GAT_144b[2];
bitset<PatternNum> G_492GAT_193[2];
bitset<PatternNum> G_444GAT_170b[2];
bitset<PatternNum> G_413GAT_147b[2];
bitset<PatternNum> G_481GAT_194[2];
bitset<PatternNum> G_479GAT_195[2];
bitset<PatternNum> G_477GAT_196[2];
bitset<PatternNum> G_475GAT_197[2];
bitset<PatternNum> G_463GAT_198[2];
bitset<PatternNum> G_426GAT_171b[2];
bitset<PatternNum> G_409GAT_150b[2];
bitset<PatternNum> G_460GAT_199[2];
bitset<PatternNum> G_425GAT_172b[2];
bitset<PatternNum> G_406GAT_153b[2];
bitset<PatternNum> G_451GAT_200[2];
bitset<PatternNum> G_466GAT_201[2];
bitset<PatternNum> G_483GAT_202[2];
bitset<PatternNum> G_503GAT_203[2];
bitset<PatternNum> G_476GAT_188b[2];
bitset<PatternNum> G_475GAT_197b[2];
bitset<PatternNum> G_505GAT_204[2];
bitset<PatternNum> G_478GAT_189b[2];
bitset<PatternNum> G_477GAT_196b[2];
bitset<PatternNum> G_507GAT_205[2];
bitset<PatternNum> G_480GAT_190b[2];
bitset<PatternNum> G_479GAT_195b[2];
bitset<PatternNum> G_509GAT_206[2];
bitset<PatternNum> G_482GAT_191b[2];
bitset<PatternNum> G_481GAT_194b[2];
bitset<PatternNum> G_521GAT_207[2];
bitset<PatternNum> G_207GAT_48b[2];
bitset<PatternNum> G_495GAT_192b[2];
bitset<PatternNum> G_520GAT_208[2];
bitset<PatternNum> G_529GAT_209[2];
bitset<PatternNum> G_528GAT_210[2];
bitset<PatternNum> G_527GAT_211[2];
bitset<PatternNum> G_526GAT_212[2];
bitset<PatternNum> G_525GAT_213[2];
bitset<PatternNum> G_524GAT_214[2];
bitset<PatternNum> G_523GAT_215[2];
bitset<PatternNum> G_522GAT_216[2];
bitset<PatternNum> G_516GAT_217[2];
bitset<PatternNum> G_514GAT_218[2];
bitset<PatternNum> G_512GAT_219[2];
bitset<PatternNum> G_510GAT_220[2];
bitset<PatternNum> G_501GAT_221[2];
bitset<PatternNum> G_135GAT_32b[2];
bitset<PatternNum> G_463GAT_198b[2];
bitset<PatternNum> G_500GAT_222[2];
bitset<PatternNum> G_519GAT_223[2];
bitset<PatternNum> G_492GAT_193b[2];
bitset<PatternNum> G_130GAT_31b[2];
bitset<PatternNum> G_518GAT_224[2];
bitset<PatternNum> G_499GAT_225[2];
bitset<PatternNum> G_460GAT_199b[2];
bitset<PatternNum> G_498GAT_226[2];
bitset<PatternNum> G_517GAT_227[2];
bitset<PatternNum> G_515GAT_228[2];
bitset<PatternNum> G_513GAT_229[2];
bitset<PatternNum> G_511GAT_230[2];
bitset<PatternNum> G_508GAT_231[2];
bitset<PatternNum> G_506GAT_232[2];
bitset<PatternNum> G_504GAT_233[2];
bitset<PatternNum> G_502GAT_234[2];
bitset<PatternNum> G_547GAT_235[2];
bitset<PatternNum> G_543GAT_236[2];
bitset<PatternNum> G_517GAT_227b[2];
bitset<PatternNum> G_516GAT_217b[2];
bitset<PatternNum> G_542GAT_237[2];
bitset<PatternNum> G_515GAT_228b[2];
bitset<PatternNum> G_514GAT_218b[2];
bitset<PatternNum> G_541GAT_238[2];
bitset<PatternNum> G_513GAT_229b[2];
bitset<PatternNum> G_512GAT_219b[2];
bitset<PatternNum> G_540GAT_239[2];
bitset<PatternNum> G_511GAT_230b[2];
bitset<PatternNum> G_510GAT_220b[2];
bitset<PatternNum> G_539GAT_240[2];
bitset<PatternNum> G_508GAT_231b[2];
bitset<PatternNum> G_318GAT_72b[2];
bitset<PatternNum> G_533GAT_241[2];
bitset<PatternNum> G_544GAT_242[2];
bitset<PatternNum> G_530GAT_243[2];
bitset<PatternNum> G_537GAT_244[2];
bitset<PatternNum> G_504GAT_233b[2];
bitset<PatternNum> G_316GAT_93b[2];
bitset<PatternNum> G_538GAT_245[2];
bitset<PatternNum> G_506GAT_232b[2];
bitset<PatternNum> G_317GAT_106b[2];
bitset<PatternNum> G_536GAT_246[2];
bitset<PatternNum> G_502GAT_234b[2];
bitset<PatternNum> G_309GAT_107b[2];
bitset<PatternNum> G_569GAT_247[2];
bitset<PatternNum> G_573GAT_248[2];
bitset<PatternNum> G_577GAT_249[2];
bitset<PatternNum> G_581GAT_250[2];
bitset<PatternNum> G_553GAT_251[2];
bitset<PatternNum> G_557GAT_252[2];
bitset<PatternNum> G_561GAT_253[2];
bitset<PatternNum> G_565GAT_254[2];
bitset<PatternNum> G_586GAT_255[2];
bitset<PatternNum> G_587GAT_256[2];
bitset<PatternNum> G_551GAT_257[2];
bitset<PatternNum> G_552GAT_258[2];
bitset<PatternNum> G_585GAT_259[2];
bitset<PatternNum> G_550GAT_260[2];
bitset<PatternNum> G_659GAT_261[2];
bitset<PatternNum> G_650GAT_262[2];
bitset<PatternNum> G_640GAT_263[2];
bitset<PatternNum> G_631GAT_264[2];
bitset<PatternNum> G_624GAT_265[2];
bitset<PatternNum> G_615GAT_266[2];
bitset<PatternNum> G_605GAT_267[2];
bitset<PatternNum> G_596GAT_268[2];
bitset<PatternNum> G_589GAT_269[2];
bitset<PatternNum> G_654GAT_270[2];
bitset<PatternNum> G_581GAT_250b[2];
bitset<PatternNum> G_651GAT_271[2];
bitset<PatternNum> G_644GAT_272[2];
bitset<PatternNum> G_577GAT_249b[2];
bitset<PatternNum> G_641GAT_273[2];
bitset<PatternNum> G_635GAT_274[2];
bitset<PatternNum> G_573GAT_248b[2];
bitset<PatternNum> G_632GAT_275[2];
bitset<PatternNum> G_628GAT_276[2];
bitset<PatternNum> G_569GAT_247b[2];
bitset<PatternNum> G_625GAT_277[2];
bitset<PatternNum> G_619GAT_278[2];
bitset<PatternNum> G_565GAT_254b[2];
bitset<PatternNum> G_616GAT_279[2];
bitset<PatternNum> G_609GAT_280[2];
bitset<PatternNum> G_561GAT_253b[2];
bitset<PatternNum> G_606GAT_281[2];
bitset<PatternNum> G_600GAT_282[2];
bitset<PatternNum> G_557GAT_252b[2];
bitset<PatternNum> G_597GAT_283[2];
bitset<PatternNum> G_593GAT_284[2];
bitset<PatternNum> G_553GAT_251b[2];
bitset<PatternNum> G_590GAT_285[2];
bitset<PatternNum> G_588GAT_286[2];
bitset<PatternNum> G_734GAT_287[2];
bitset<PatternNum> G_733GAT_288[2];
bitset<PatternNum> G_732GAT_289[2];
bitset<PatternNum> G_731GAT_290[2];
bitset<PatternNum> G_659GAT_261b[2];
bitset<PatternNum> G_341GAT_61b[2];
bitset<PatternNum> G_721GAT_291[2];
bitset<PatternNum> G_650GAT_262b[2];
bitset<PatternNum> G_339GAT_62b[2];
bitset<PatternNum> G_712GAT_292[2];
bitset<PatternNum> G_640GAT_263b[2];
bitset<PatternNum> G_337GAT_63b[2];
bitset<PatternNum> G_589GAT_269b[2];
bitset<PatternNum> G_587GAT_256b[2];
bitset<PatternNum> G_727GAT_294[2];
bitset<PatternNum> G_722GAT_295[2];
bitset<PatternNum> G_717GAT_296[2];
bitset<PatternNum> G_713GAT_297[2];
bitset<PatternNum> G_708GAT_298[2];
bitset<PatternNum> G_705GAT_299[2];
bitset<PatternNum> G_700GAT_300[2];
bitset<PatternNum> G_697GAT_301[2];
bitset<PatternNum> G_704GAT_302[2];
bitset<PatternNum> G_526GAT_212b[2];
bitset<PatternNum> G_631GAT_264b[2];
bitset<PatternNum> G_692GAT_303[2];
bitset<PatternNum> G_687GAT_304[2];
bitset<PatternNum> G_696GAT_305[2];
bitset<PatternNum> G_525GAT_213b[2];
bitset<PatternNum> G_624GAT_265b[2];
bitset<PatternNum> G_682GAT_306[2];
bitset<PatternNum> G_678GAT_307[2];
bitset<PatternNum> G_686GAT_308[2];
bitset<PatternNum> G_524GAT_214b[2];
bitset<PatternNum> G_615GAT_266b[2];
bitset<PatternNum> G_673GAT_309[2];
bitset<PatternNum> G_670GAT_310[2];
bitset<PatternNum> G_677GAT_311[2];
bitset<PatternNum> G_523GAT_215b[2];
bitset<PatternNum> G_605GAT_267b[2];
bitset<PatternNum> G_665GAT_312[2];
bitset<PatternNum> G_662GAT_313[2];
bitset<PatternNum> G_669GAT_314[2];
bitset<PatternNum> G_522GAT_216b[2];
bitset<PatternNum> G_596GAT_268b[2];
bitset<PatternNum> G_588GAT_286b[2];
bitset<PatternNum> G_552GAT_258b[2];
bitset<PatternNum> G_758GAT_316[2];
bitset<PatternNum> G_757GAT_317[2];
bitset<PatternNum> G_261GAT_57b[2];
bitset<PatternNum> G_727GAT_294b[2];
bitset<PatternNum> G_760GAT_318[2];
bitset<PatternNum> G_755GAT_319[2];
bitset<PatternNum> G_752GAT_320[2];
bitset<PatternNum> G_749GAT_321[2];
bitset<PatternNum> G_746GAT_322[2];
bitset<PatternNum> G_743GAT_323[2];
bitset<PatternNum> G_740GAT_324[2];
bitset<PatternNum> G_737GAT_325[2];
bitset<PatternNum> G_759GAT_326[2];
bitset<PatternNum> G_754GAT_327[2];
bitset<PatternNum> G_751GAT_328[2];
bitset<PatternNum> G_748GAT_329[2];
bitset<PatternNum> G_745GAT_330[2];
bitset<PatternNum> G_742GAT_331[2];
bitset<PatternNum> G_739GAT_332[2];
bitset<PatternNum> G_736GAT_333[2];
bitset<PatternNum> G_756GAT_335[2];
bitset<PatternNum> G_761GAT_336[2];
bitset<PatternNum> G_763GAT_337[2];
bitset<PatternNum> G_753GAT_338[2];
bitset<PatternNum> G_762GAT_339[2];
bitset<PatternNum> G_750GAT_340[2];
bitset<PatternNum> G_747GAT_341[2];
bitset<PatternNum> G_744GAT_342[2];
bitset<PatternNum> G_764GAT_343[2];
bitset<PatternNum> G_766GAT_344[2];
bitset<PatternNum> G_741GAT_345[2];
bitset<PatternNum> G_765GAT_346[2];
bitset<PatternNum> G_738GAT_347[2];
bitset<PatternNum> G_735GAT_348[2];
bitset<PatternNum> G_786GAT_350[2];
bitset<PatternNum> G_758GAT_316b[2];
bitset<PatternNum> G_757GAT_317b[2];
bitset<PatternNum> G_773GAT_351[2];
bitset<PatternNum> G_778GAT_352[2];
bitset<PatternNum> G_782GAT_353[2];
bitset<PatternNum> G_787GAT_354[2];
bitset<PatternNum> G_760GAT_318b[2];
bitset<PatternNum> G_759GAT_326b[2];
bitset<PatternNum> G_785GAT_355[2];
bitset<PatternNum> G_755GAT_319b[2];
bitset<PatternNum> G_754GAT_327b[2];
bitset<PatternNum> G_781GAT_356[2];
bitset<PatternNum> G_752GAT_320b[2];
bitset<PatternNum> G_751GAT_328b[2];
bitset<PatternNum> G_777GAT_357[2];
bitset<PatternNum> G_749GAT_321b[2];
bitset<PatternNum> G_748GAT_329b[2];
bitset<PatternNum> G_772GAT_358[2];
bitset<PatternNum> G_746GAT_322b[2];
bitset<PatternNum> G_745GAT_330b[2];
bitset<PatternNum> G_771GAT_359[2];
bitset<PatternNum> G_743GAT_323b[2];
bitset<PatternNum> G_742GAT_331b[2];
bitset<PatternNum> G_770GAT_360[2];
bitset<PatternNum> G_740GAT_324b[2];
bitset<PatternNum> G_739GAT_332b[2];
bitset<PatternNum> G_769GAT_361[2];
bitset<PatternNum> G_737GAT_325b[2];
bitset<PatternNum> G_736GAT_333b[2];
bitset<PatternNum> G_794GAT_362[2];
bitset<PatternNum> G_792GAT_363[2];
bitset<PatternNum> G_782GAT_353b[2];
bitset<PatternNum> G_717GAT_296b[2];
bitset<PatternNum> G_793GAT_364[2];
bitset<PatternNum> G_790GAT_365[2];
bitset<PatternNum> G_778GAT_352b[2];
bitset<PatternNum> G_708GAT_298b[2];
bitset<PatternNum> G_791GAT_366[2];
bitset<PatternNum> G_788GAT_367[2];
bitset<PatternNum> G_773GAT_351b[2];
bitset<PatternNum> G_700GAT_300b[2];
bitset<PatternNum> G_789GAT_368[2];
bitset<PatternNum> G_795GAT_369[2];
bitset<PatternNum> G_804GAT_370[2];
bitset<PatternNum> G_793GAT_364b[2];
bitset<PatternNum> G_792GAT_363b[2];
bitset<PatternNum> G_803GAT_371[2];
bitset<PatternNum> G_791GAT_366b[2];
bitset<PatternNum> G_790GAT_365b[2];
bitset<PatternNum> G_802GAT_372[2];
bitset<PatternNum> G_789GAT_368b[2];
bitset<PatternNum> G_788GAT_367b[2];
bitset<PatternNum> G_796GAT_373[2];
bitset<PatternNum> G_805GAT_374[2];
bitset<PatternNum> G_794GAT_362b[2];
bitset<PatternNum> G_340GAT_73b[2];
bitset<PatternNum> G_810GAT_375[2];
bitset<PatternNum> G_809GAT_376[2];
bitset<PatternNum> G_808GAT_377[2];
bitset<PatternNum> G_811GAT_378[2];
bitset<PatternNum> G_806GAT_379[2];
bitset<PatternNum> G_796GAT_373b[2];
bitset<PatternNum> G_692GAT_303b[2];
bitset<PatternNum> G_807GAT_380[2];
bitset<PatternNum> G_812GAT_381[2];
bitset<PatternNum> G_813GAT_382[2];
bitset<PatternNum> G_814GAT_383[2];
bitset<PatternNum> G_829GAT_384[2];
bitset<PatternNum> G_825GAT_385[2];
bitset<PatternNum> G_807GAT_380b[2];
bitset<PatternNum> G_806GAT_379b[2];
bitset<PatternNum> G_822GAT_386[2];
bitset<PatternNum> G_819GAT_387[2];
bitset<PatternNum> G_815GAT_388[2];
bitset<PatternNum> G_828GAT_389[2];
bitset<PatternNum> G_810GAT_375b[2];
bitset<PatternNum> G_338GAT_76b[2];
bitset<PatternNum> G_827GAT_390[2];
bitset<PatternNum> G_809GAT_376b[2];
bitset<PatternNum> G_336GAT_77b[2];
bitset<PatternNum> G_826GAT_391[2];
bitset<PatternNum> G_808GAT_377b[2];
bitset<PatternNum> G_335GAT_80b[2];
bitset<PatternNum> G_836GAT_392[2];
bitset<PatternNum> G_839GAT_394[2];
bitset<PatternNum> G_838GAT_395[2];
bitset<PatternNum> G_837GAT_396[2];
bitset<PatternNum> G_834GAT_397[2];
bitset<PatternNum> G_822GAT_386b[2];
bitset<PatternNum> G_682GAT_306b[2];
bitset<PatternNum> G_835GAT_398[2];
bitset<PatternNum> G_832GAT_399[2];
bitset<PatternNum> G_819GAT_387b[2];
bitset<PatternNum> G_673GAT_309b[2];
bitset<PatternNum> G_833GAT_400[2];
bitset<PatternNum> G_830GAT_401[2];
bitset<PatternNum> G_815GAT_388b[2];
bitset<PatternNum> G_665GAT_312b[2];
bitset<PatternNum> G_831GAT_402[2];
bitset<PatternNum> G_841GAT_403[2];
bitset<PatternNum> G_848GAT_405[2];
bitset<PatternNum> G_847GAT_406[2];
bitset<PatternNum> G_846GAT_407[2];
bitset<PatternNum> G_844GAT_408[2];
bitset<PatternNum> G_835GAT_398b[2];
bitset<PatternNum> G_834GAT_397b[2];
bitset<PatternNum> G_843GAT_409[2];
bitset<PatternNum> G_833GAT_400b[2];
bitset<PatternNum> G_832GAT_399b[2];
bitset<PatternNum> G_842GAT_410[2];
bitset<PatternNum> G_831GAT_402b[2];
bitset<PatternNum> G_830GAT_401b[2];
bitset<PatternNum> G_849GAT_411[2];
bitset<PatternNum> G_845GAT_412[2];
bitset<PatternNum> G_836GAT_392b[2];
bitset<PatternNum> G_334GAT_81b[2];
bitset<PatternNum> G_853GAT_413[2];
bitset<PatternNum> G_852GAT_414[2];
bitset<PatternNum> G_851GAT_415[2];
bitset<PatternNum> G_854GAT_419[2];
bitset<PatternNum> G_859GAT_421[2];
bitset<PatternNum> G_851GAT_415b[2];
bitset<PatternNum> G_417GAT_142b[2];
bitset<PatternNum> G_862GAT_425[2];
bitset<PatternNum> G_861GAT_427[2];
bitset<PatternNum> G_853GAT_413b[2];
bitset<PatternNum> G_333GAT_84b[2];
bitset<PatternNum> G_860GAT_428[2];
bitset<PatternNum> G_852GAT_414b[2];
bitset<PatternNum> G_332GAT_85b[2];
bitset<PatternNum> G_869GAT_430[2];
bitset<PatternNum> G_868GAT_431[2];
bitset<PatternNum> G_867GAT_432[2];
bitset<PatternNum> G_873GAT_434[2];
bitset<PatternNum> G_872GAT_435[2];
bitset<PatternNum> G_871GAT_436[2];
bitset<PatternNum> temp;
ofstream fout("c880_100.out", ios::out);

int main()
{
clock_t time_init, time_end;
time_init = clock();

G_1GAT_0[0] = 21478 ;
G_1GAT_0[1] = 21478 ;
G_8GAT_1[0] = 35962 ;
G_8GAT_1[1] = 35962 ;
G_13GAT_2[0] = 32043 ;
G_13GAT_2[1] = 32043 ;
G_17GAT_3[0] = 7488 ;
G_17GAT_3[1] = 7488 ;
G_26GAT_4[0] = 1409 ;
G_26GAT_4[1] = 1409 ;
G_29GAT_5[0] = 3199 ;
G_29GAT_5[1] = 3199 ;
G_36GAT_6[0] = 11518 ;
G_36GAT_6[1] = 11518 ;
G_42GAT_7[0] = 60579 ;
G_42GAT_7[1] = 60579 ;
G_51GAT_8[0] = 8407 ;
G_51GAT_8[1] = 8407 ;
G_55GAT_9[0] = 31825 ;
G_55GAT_9[1] = 31825 ;
G_59GAT_10[0] = 39582 ;
G_59GAT_10[1] = 39582 ;
G_68GAT_11[0] = 15538 ;
G_68GAT_11[1] = 15538 ;
G_72GAT_12[0] = 8918 ;
G_72GAT_12[1] = 8918 ;
G_73GAT_13[0] = 49094 ;
G_73GAT_13[1] = 49094 ;
G_74GAT_14[0] = 46203 ;
G_74GAT_14[1] = 46203 ;
G_75GAT_15[0] = 29351 ;
G_75GAT_15[1] = 29351 ;
G_80GAT_16[0] = 1988 ;
G_80GAT_16[1] = 1988 ;
G_85GAT_17[0] = 26636 ;
G_85GAT_17[1] = 26636 ;
G_86GAT_18[0] = 16534 ;
G_86GAT_18[1] = 16534 ;
G_87GAT_19[0] = 34143 ;
G_87GAT_19[1] = 34143 ;
G_88GAT_20[0] = 60202 ;
G_88GAT_20[1] = 60202 ;
G_89GAT_21[0] = 28179 ;
G_89GAT_21[1] = 28179 ;
G_90GAT_22[0] = 51614 ;
G_90GAT_22[1] = 51614 ;
G_91GAT_23[0] = 55356 ;
G_91GAT_23[1] = 55356 ;
G_96GAT_24[0] = 32274 ;
G_96GAT_24[1] = 32274 ;
G_101GAT_25[0] = 19635 ;
G_101GAT_25[1] = 19635 ;
G_106GAT_26[0] = 40439 ;
G_106GAT_26[1] = 40439 ;
G_111GAT_27[0] = 2562 ;
G_111GAT_27[1] = 2562 ;
G_116GAT_28[0] = 13368 ;
G_116GAT_28[1] = 13368 ;
G_121GAT_29[0] = 54518 ;
G_121GAT_29[1] = 54518 ;
G_126GAT_30[0] = 50873 ;
G_126GAT_30[1] = 50873 ;
G_130GAT_31[0] = 22528 ;
G_130GAT_31[1] = 22528 ;
G_135GAT_32[0] = 41129 ;
G_135GAT_32[1] = 41129 ;
G_138GAT_33[0] = 46721 ;
G_138GAT_33[1] = 46721 ;
G_143GAT_34[0] = 34129 ;
G_143GAT_34[1] = 34129 ;
G_146GAT_35[0] = 43026 ;
G_146GAT_35[1] = 43026 ;
G_149GAT_36[0] = 64534 ;
G_149GAT_36[1] = 64534 ;
G_152GAT_37[0] = 38104 ;
G_152GAT_37[1] = 38104 ;
G_153GAT_38[0] = 65137 ;
G_153GAT_38[1] = 65137 ;
G_156GAT_39[0] = 17990 ;
G_156GAT_39[1] = 17990 ;
G_159GAT_40[0] = 12621 ;
G_159GAT_40[1] = 12621 ;
G_165GAT_41[0] = 58072 ;
G_165GAT_41[1] = 58072 ;
G_171GAT_42[0] = 37805 ;
G_171GAT_42[1] = 37805 ;
G_177GAT_43[0] = 13415 ;
G_177GAT_43[1] = 13415 ;
G_183GAT_44[0] = 35026 ;
G_183GAT_44[1] = 35026 ;
G_189GAT_45[0] = 7862 ;
G_189GAT_45[1] = 7862 ;
G_195GAT_46[0] = 47835 ;
G_195GAT_46[1] = 47835 ;
G_201GAT_47[0] = 59299 ;
G_201GAT_47[1] = 59299 ;
G_207GAT_48[0] = 12453 ;
G_207GAT_48[1] = 12453 ;
G_210GAT_49[0] = 59429 ;
G_210GAT_49[1] = 59429 ;
G_219GAT_50[0] = 7238 ;
G_219GAT_50[1] = 7238 ;
G_228GAT_51[0] = 14135 ;
G_228GAT_51[1] = 14135 ;
G_237GAT_52[0] = 28544 ;
G_237GAT_52[1] = 28544 ;
G_246GAT_53[0] = 39381 ;
G_246GAT_53[1] = 39381 ;
G_255GAT_54[0] = 60509 ;
G_255GAT_54[1] = 60509 ;
G_259GAT_55[0] = 38217 ;
G_259GAT_55[1] = 38217 ;
G_260GAT_56[0] = 12034 ;
G_260GAT_56[1] = 12034 ;
G_261GAT_57[0] = 50529 ;
G_261GAT_57[1] = 50529 ;
G_267GAT_58[0] = 20071 ;
G_267GAT_58[1] = 20071 ;
G_268GAT_59[0] = 3744 ;
G_268GAT_59[1] = 3744 ;

evaluate();
printIO(16);

G_1GAT_0[0] = 10451 ;
G_1GAT_0[1] = 10451 ;
G_8GAT_1[0] = 47787 ;
G_8GAT_1[1] = 47787 ;
G_13GAT_2[0] = 38273 ;
G_13GAT_2[1] = 38273 ;
G_17GAT_3[0] = 39052 ;
G_17GAT_3[1] = 39052 ;
G_26GAT_4[0] = 39440 ;
G_26GAT_4[1] = 39440 ;
G_29GAT_5[0] = 45188 ;
G_29GAT_5[1] = 45188 ;
G_36GAT_6[0] = 53512 ;
G_36GAT_6[1] = 53512 ;
G_42GAT_7[0] = 24128 ;
G_42GAT_7[1] = 24128 ;
G_51GAT_8[0] = 32978 ;
G_51GAT_8[1] = 32978 ;
G_55GAT_9[0] = 43966 ;
G_55GAT_9[1] = 43966 ;
G_59GAT_10[0] = 1900 ;
G_59GAT_10[1] = 1900 ;
G_68GAT_11[0] = 62600 ;
G_68GAT_11[1] = 62600 ;
G_72GAT_12[0] = 46309 ;
G_72GAT_12[1] = 46309 ;
G_73GAT_13[0] = 46006 ;
G_73GAT_13[1] = 46006 ;
G_74GAT_14[0] = 46554 ;
G_74GAT_14[1] = 46554 ;
G_75GAT_15[0] = 42356 ;
G_75GAT_15[1] = 42356 ;
G_80GAT_16[0] = 39831 ;
G_80GAT_16[1] = 39831 ;
G_85GAT_17[0] = 4384 ;
G_85GAT_17[1] = 4384 ;
G_86GAT_18[0] = 49236 ;
G_86GAT_18[1] = 49236 ;
G_87GAT_19[0] = 47460 ;
G_87GAT_19[1] = 47460 ;
G_88GAT_20[0] = 45273 ;
G_88GAT_20[1] = 45273 ;
G_89GAT_21[0] = 28958 ;
G_89GAT_21[1] = 28958 ;
G_90GAT_22[0] = 14488 ;
G_90GAT_22[1] = 14488 ;
G_91GAT_23[0] = 4948 ;
G_91GAT_23[1] = 4948 ;
G_96GAT_24[0] = 44562 ;
G_96GAT_24[1] = 44562 ;
G_101GAT_25[0] = 21672 ;
G_101GAT_25[1] = 21672 ;
G_106GAT_26[0] = 54141 ;
G_106GAT_26[1] = 54141 ;
G_111GAT_27[0] = 36255 ;
G_111GAT_27[1] = 36255 ;
G_116GAT_28[0] = 47998 ;
G_116GAT_28[1] = 47998 ;
G_121GAT_29[0] = 56019 ;
G_121GAT_29[1] = 56019 ;
G_126GAT_30[0] = 64322 ;
G_126GAT_30[1] = 64322 ;
G_130GAT_31[0] = 21451 ;
G_130GAT_31[1] = 21451 ;
G_135GAT_32[0] = 39101 ;
G_135GAT_32[1] = 39101 ;
G_138GAT_33[0] = 24627 ;
G_138GAT_33[1] = 24627 ;
G_143GAT_34[0] = 50426 ;
G_143GAT_34[1] = 50426 ;
G_146GAT_35[0] = 42940 ;
G_146GAT_35[1] = 42940 ;
G_149GAT_36[0] = 8891 ;
G_149GAT_36[1] = 8891 ;
G_152GAT_37[0] = 59497 ;
G_152GAT_37[1] = 59497 ;
G_153GAT_38[0] = 17318 ;
G_153GAT_38[1] = 17318 ;
G_156GAT_39[0] = 61850 ;
G_156GAT_39[1] = 61850 ;
G_159GAT_40[0] = 31127 ;
G_159GAT_40[1] = 31127 ;
G_165GAT_41[0] = 549 ;
G_165GAT_41[1] = 549 ;
G_171GAT_42[0] = 23836 ;
G_171GAT_42[1] = 23836 ;
G_177GAT_43[0] = 2508 ;
G_177GAT_43[1] = 2508 ;
G_183GAT_44[0] = 56573 ;
G_183GAT_44[1] = 56573 ;
G_189GAT_45[0] = 61111 ;
G_189GAT_45[1] = 61111 ;
G_195GAT_46[0] = 57165 ;
G_195GAT_46[1] = 57165 ;
G_201GAT_47[0] = 6362 ;
G_201GAT_47[1] = 6362 ;
G_207GAT_48[0] = 1545 ;
G_207GAT_48[1] = 1545 ;
G_210GAT_49[0] = 5683 ;
G_210GAT_49[1] = 5683 ;
G_219GAT_50[0] = 43376 ;
G_219GAT_50[1] = 43376 ;
G_228GAT_51[0] = 27313 ;
G_228GAT_51[1] = 27313 ;
G_237GAT_52[0] = 10746 ;
G_237GAT_52[1] = 10746 ;
G_246GAT_53[0] = 31389 ;
G_246GAT_53[1] = 31389 ;
G_255GAT_54[0] = 21483 ;
G_255GAT_54[1] = 21483 ;
G_259GAT_55[0] = 30357 ;
G_259GAT_55[1] = 30357 ;
G_260GAT_56[0] = 32622 ;
G_260GAT_56[1] = 32622 ;
G_261GAT_57[0] = 29047 ;
G_261GAT_57[1] = 29047 ;
G_267GAT_58[0] = 41354 ;
G_267GAT_58[1] = 41354 ;
G_268GAT_59[0] = 41612 ;
G_268GAT_59[1] = 41612 ;

evaluate();
printIO(16);

G_1GAT_0[0] = 40492 ;
G_1GAT_0[1] = 40492 ;
G_8GAT_1[0] = 53828 ;
G_8GAT_1[1] = 53828 ;
G_13GAT_2[0] = 39668 ;
G_13GAT_2[1] = 39668 ;
G_17GAT_3[0] = 11069 ;
G_17GAT_3[1] = 11069 ;
G_26GAT_4[0] = 44381 ;
G_26GAT_4[1] = 44381 ;
G_29GAT_5[0] = 2689 ;
G_29GAT_5[1] = 2689 ;
G_36GAT_6[0] = 39809 ;
G_36GAT_6[1] = 39809 ;
G_42GAT_7[0] = 15963 ;
G_42GAT_7[1] = 15963 ;
G_51GAT_8[0] = 62396 ;
G_51GAT_8[1] = 62396 ;
G_55GAT_9[0] = 5023 ;
G_55GAT_9[1] = 5023 ;
G_59GAT_10[0] = 19961 ;
G_59GAT_10[1] = 19961 ;
G_68GAT_11[0] = 52745 ;
G_68GAT_11[1] = 52745 ;
G_72GAT_12[0] = 55189 ;
G_72GAT_12[1] = 55189 ;
G_73GAT_13[0] = 14713 ;
G_73GAT_13[1] = 14713 ;
G_74GAT_14[0] = 48603 ;
G_74GAT_14[1] = 48603 ;
G_75GAT_15[0] = 56741 ;
G_75GAT_15[1] = 56741 ;
G_80GAT_16[0] = 39829 ;
G_80GAT_16[1] = 39829 ;
G_85GAT_17[0] = 38342 ;
G_85GAT_17[1] = 38342 ;
G_86GAT_18[0] = 46231 ;
G_86GAT_18[1] = 46231 ;
G_87GAT_19[0] = 8855 ;
G_87GAT_19[1] = 8855 ;
G_88GAT_20[0] = 37860 ;
G_88GAT_20[1] = 37860 ;
G_89GAT_21[0] = 30021 ;
G_89GAT_21[1] = 30021 ;
G_90GAT_22[0] = 18197 ;
G_90GAT_22[1] = 18197 ;
G_91GAT_23[0] = 1423 ;
G_91GAT_23[1] = 1423 ;
G_96GAT_24[0] = 19975 ;
G_96GAT_24[1] = 19975 ;
G_101GAT_25[0] = 11694 ;
G_101GAT_25[1] = 11694 ;
G_106GAT_26[0] = 40757 ;
G_106GAT_26[1] = 40757 ;
G_111GAT_27[0] = 25396 ;
G_111GAT_27[1] = 25396 ;
G_116GAT_28[0] = 36026 ;
G_116GAT_28[1] = 36026 ;
G_121GAT_29[0] = 57118 ;
G_121GAT_29[1] = 57118 ;
G_126GAT_30[0] = 19991 ;
G_126GAT_30[1] = 19991 ;
G_130GAT_31[0] = 45048 ;
G_130GAT_31[1] = 45048 ;
G_135GAT_32[0] = 50047 ;
G_135GAT_32[1] = 50047 ;
G_138GAT_33[0] = 55740 ;
G_138GAT_33[1] = 55740 ;
G_143GAT_34[0] = 52912 ;
G_143GAT_34[1] = 52912 ;
G_146GAT_35[0] = 23861 ;
G_146GAT_35[1] = 23861 ;
G_149GAT_36[0] = 45056 ;
G_149GAT_36[1] = 45056 ;
G_152GAT_37[0] = 49317 ;
G_152GAT_37[1] = 49317 ;
G_153GAT_38[0] = 43669 ;
G_153GAT_38[1] = 43669 ;
G_156GAT_39[0] = 36155 ;
G_156GAT_39[1] = 36155 ;
G_159GAT_40[0] = 47377 ;
G_159GAT_40[1] = 47377 ;
G_165GAT_41[0] = 54088 ;
G_165GAT_41[1] = 54088 ;
G_171GAT_42[0] = 62298 ;
G_171GAT_42[1] = 62298 ;
G_177GAT_43[0] = 31556 ;
G_177GAT_43[1] = 31556 ;
G_183GAT_44[0] = 490 ;
G_183GAT_44[1] = 490 ;
G_189GAT_45[0] = 14121 ;
G_189GAT_45[1] = 14121 ;
G_195GAT_46[0] = 10361 ;
G_195GAT_46[1] = 10361 ;
G_201GAT_47[0] = 48917 ;
G_201GAT_47[1] = 48917 ;
G_207GAT_48[0] = 17650 ;
G_207GAT_48[1] = 17650 ;
G_210GAT_49[0] = 57481 ;
G_210GAT_49[1] = 57481 ;
G_219GAT_50[0] = 650 ;
G_219GAT_50[1] = 650 ;
G_228GAT_51[0] = 56645 ;
G_228GAT_51[1] = 56645 ;
G_237GAT_52[0] = 29717 ;
G_237GAT_52[1] = 29717 ;
G_246GAT_53[0] = 25960 ;
G_246GAT_53[1] = 25960 ;
G_255GAT_54[0] = 24932 ;
G_255GAT_54[1] = 24932 ;
G_259GAT_55[0] = 9386 ;
G_259GAT_55[1] = 9386 ;
G_260GAT_56[0] = 389 ;
G_260GAT_56[1] = 389 ;
G_261GAT_57[0] = 62024 ;
G_261GAT_57[1] = 62024 ;
G_267GAT_58[0] = 15962 ;
G_267GAT_58[1] = 15962 ;
G_268GAT_59[0] = 14835 ;
G_268GAT_59[1] = 14835 ;

evaluate();
printIO(16);

G_1GAT_0[0] = 33157 ;
G_1GAT_0[1] = 33157 ;
G_8GAT_1[0] = 21905 ;
G_8GAT_1[1] = 21905 ;
G_13GAT_2[0] = 53809 ;
G_13GAT_2[1] = 53809 ;
G_17GAT_3[0] = 57478 ;
G_17GAT_3[1] = 57478 ;
G_26GAT_4[0] = 64157 ;
G_26GAT_4[1] = 64157 ;
G_29GAT_5[0] = 33448 ;
G_29GAT_5[1] = 33448 ;
G_36GAT_6[0] = 33127 ;
G_36GAT_6[1] = 33127 ;
G_42GAT_7[0] = 13663 ;
G_42GAT_7[1] = 13663 ;
G_51GAT_8[0] = 20126 ;
G_51GAT_8[1] = 20126 ;
G_55GAT_9[0] = 3800 ;
G_55GAT_9[1] = 3800 ;
G_59GAT_10[0] = 45956 ;
G_59GAT_10[1] = 45956 ;
G_68GAT_11[0] = 50257 ;
G_68GAT_11[1] = 50257 ;
G_72GAT_12[0] = 34560 ;
G_72GAT_12[1] = 34560 ;
G_73GAT_13[0] = 51966 ;
G_73GAT_13[1] = 51966 ;
G_74GAT_14[0] = 41362 ;
G_74GAT_14[1] = 41362 ;
G_75GAT_15[0] = 3407 ;
G_75GAT_15[1] = 3407 ;
G_80GAT_16[0] = 19668 ;
G_80GAT_16[1] = 19668 ;
G_85GAT_17[0] = 4772 ;
G_85GAT_17[1] = 4772 ;
G_86GAT_18[0] = 42096 ;
G_86GAT_18[1] = 42096 ;
G_87GAT_19[0] = 27106 ;
G_87GAT_19[1] = 27106 ;
G_88GAT_20[0] = 43768 ;
G_88GAT_20[1] = 43768 ;
G_89GAT_21[0] = 37193 ;
G_89GAT_21[1] = 37193 ;
G_90GAT_22[0] = 24108 ;
G_90GAT_22[1] = 24108 ;
G_91GAT_23[0] = 49944 ;
G_91GAT_23[1] = 49944 ;
G_96GAT_24[0] = 34751 ;
G_96GAT_24[1] = 34751 ;
G_101GAT_25[0] = 46971 ;
G_101GAT_25[1] = 46971 ;
G_106GAT_26[0] = 64110 ;
G_106GAT_26[1] = 64110 ;
G_111GAT_27[0] = 53958 ;
G_111GAT_27[1] = 53958 ;
G_116GAT_28[0] = 17915 ;
G_116GAT_28[1] = 17915 ;
G_121GAT_29[0] = 39082 ;
G_121GAT_29[1] = 39082 ;
G_126GAT_30[0] = 7466 ;
G_126GAT_30[1] = 7466 ;
G_130GAT_31[0] = 33332 ;
G_130GAT_31[1] = 33332 ;
G_135GAT_32[0] = 8088 ;
G_135GAT_32[1] = 8088 ;
G_138GAT_33[0] = 48759 ;
G_138GAT_33[1] = 48759 ;
G_143GAT_34[0] = 6675 ;
G_143GAT_34[1] = 6675 ;
G_146GAT_35[0] = 51575 ;
G_146GAT_35[1] = 51575 ;
G_149GAT_36[0] = 54254 ;
G_149GAT_36[1] = 54254 ;
G_152GAT_37[0] = 47009 ;
G_152GAT_37[1] = 47009 ;
G_153GAT_38[0] = 22951 ;
G_153GAT_38[1] = 22951 ;
G_156GAT_39[0] = 951 ;
G_156GAT_39[1] = 951 ;
G_159GAT_40[0] = 27138 ;
G_159GAT_40[1] = 27138 ;
G_165GAT_41[0] = 13578 ;
G_165GAT_41[1] = 13578 ;
G_171GAT_42[0] = 34680 ;
G_171GAT_42[1] = 34680 ;
G_177GAT_43[0] = 59691 ;
G_177GAT_43[1] = 59691 ;
G_183GAT_44[0] = 53040 ;
G_183GAT_44[1] = 53040 ;
G_189GAT_45[0] = 45024 ;
G_189GAT_45[1] = 45024 ;
G_195GAT_46[0] = 24500 ;
G_195GAT_46[1] = 24500 ;
G_201GAT_47[0] = 3491 ;
G_201GAT_47[1] = 3491 ;
G_207GAT_48[0] = 18161 ;
G_207GAT_48[1] = 18161 ;
G_210GAT_49[0] = 45155 ;
G_210GAT_49[1] = 45155 ;
G_219GAT_50[0] = 16204 ;
G_219GAT_50[1] = 16204 ;
G_228GAT_51[0] = 55909 ;
G_228GAT_51[1] = 55909 ;
G_237GAT_52[0] = 60778 ;
G_237GAT_52[1] = 60778 ;
G_246GAT_53[0] = 9536 ;
G_246GAT_53[1] = 9536 ;
G_255GAT_54[0] = 30975 ;
G_255GAT_54[1] = 30975 ;
G_259GAT_55[0] = 35038 ;
G_259GAT_55[1] = 35038 ;
G_260GAT_56[0] = 32044 ;
G_260GAT_56[1] = 32044 ;
G_261GAT_57[0] = 1739 ;
G_261GAT_57[1] = 1739 ;
G_267GAT_58[0] = 2764 ;
G_267GAT_58[1] = 2764 ;
G_268GAT_59[0] = 9885 ;
G_268GAT_59[1] = 9885 ;

evaluate();
printIO(16);

G_1GAT_0[0] = 60709 ;
G_1GAT_0[1] = 60709 ;
G_8GAT_1[0] = 23606 ;
G_8GAT_1[1] = 23606 ;
G_13GAT_2[0] = 48036 ;
G_13GAT_2[1] = 48036 ;
G_17GAT_3[0] = 20148 ;
G_17GAT_3[1] = 20148 ;
G_26GAT_4[0] = 55718 ;
G_26GAT_4[1] = 55718 ;
G_29GAT_5[0] = 28417 ;
G_29GAT_5[1] = 28417 ;
G_36GAT_6[0] = 38927 ;
G_36GAT_6[1] = 38927 ;
G_42GAT_7[0] = 33207 ;
G_42GAT_7[1] = 33207 ;
G_51GAT_8[0] = 56322 ;
G_51GAT_8[1] = 56322 ;
G_55GAT_9[0] = 15398 ;
G_55GAT_9[1] = 15398 ;
G_59GAT_10[0] = 48927 ;
G_59GAT_10[1] = 48927 ;
G_68GAT_11[0] = 2839 ;
G_68GAT_11[1] = 2839 ;
G_72GAT_12[0] = 34846 ;
G_72GAT_12[1] = 34846 ;
G_73GAT_13[0] = 20595 ;
G_73GAT_13[1] = 20595 ;
G_74GAT_14[0] = 46232 ;
G_74GAT_14[1] = 46232 ;
G_75GAT_15[0] = 32470 ;
G_75GAT_15[1] = 32470 ;
G_80GAT_16[0] = 50550 ;
G_80GAT_16[1] = 50550 ;
G_85GAT_17[0] = 37255 ;
G_85GAT_17[1] = 37255 ;
G_86GAT_18[0] = 46044 ;
G_86GAT_18[1] = 46044 ;
G_87GAT_19[0] = 39914 ;
G_87GAT_19[1] = 39914 ;
G_88GAT_20[0] = 53809 ;
G_88GAT_20[1] = 53809 ;
G_89GAT_21[0] = 18110 ;
G_89GAT_21[1] = 18110 ;
G_90GAT_22[0] = 5338 ;
G_90GAT_22[1] = 5338 ;
G_91GAT_23[0] = 46434 ;
G_91GAT_23[1] = 46434 ;
G_96GAT_24[0] = 28771 ;
G_96GAT_24[1] = 28771 ;
G_101GAT_25[0] = 23393 ;
G_101GAT_25[1] = 23393 ;
G_106GAT_26[0] = 63530 ;
G_106GAT_26[1] = 63530 ;
G_111GAT_27[0] = 6128 ;
G_111GAT_27[1] = 6128 ;
G_116GAT_28[0] = 15229 ;
G_116GAT_28[1] = 15229 ;
G_121GAT_29[0] = 37403 ;
G_121GAT_29[1] = 37403 ;
G_126GAT_30[0] = 1607 ;
G_126GAT_30[1] = 1607 ;
G_130GAT_31[0] = 23325 ;
G_130GAT_31[1] = 23325 ;
G_135GAT_32[0] = 19794 ;
G_135GAT_32[1] = 19794 ;
G_138GAT_33[0] = 48611 ;
G_138GAT_33[1] = 48611 ;
G_143GAT_34[0] = 13555 ;
G_143GAT_34[1] = 13555 ;
G_146GAT_35[0] = 35928 ;
G_146GAT_35[1] = 35928 ;
G_149GAT_36[0] = 48638 ;
G_149GAT_36[1] = 48638 ;
G_152GAT_37[0] = 14351 ;
G_152GAT_37[1] = 14351 ;
G_153GAT_38[0] = 23292 ;
G_153GAT_38[1] = 23292 ;
G_156GAT_39[0] = 29023 ;
G_156GAT_39[1] = 29023 ;
G_159GAT_40[0] = 28038 ;
G_159GAT_40[1] = 28038 ;
G_165GAT_41[0] = 19530 ;
G_165GAT_41[1] = 19530 ;
G_171GAT_42[0] = 34950 ;
G_171GAT_42[1] = 34950 ;
G_177GAT_43[0] = 34434 ;
G_177GAT_43[1] = 34434 ;
G_183GAT_44[0] = 2797 ;
G_183GAT_44[1] = 2797 ;
G_189GAT_45[0] = 16751 ;
G_189GAT_45[1] = 16751 ;
G_195GAT_46[0] = 58553 ;
G_195GAT_46[1] = 58553 ;
G_201GAT_47[0] = 20146 ;
G_201GAT_47[1] = 20146 ;
G_207GAT_48[0] = 52060 ;
G_207GAT_48[1] = 52060 ;
G_210GAT_49[0] = 43305 ;
G_210GAT_49[1] = 43305 ;
G_219GAT_50[0] = 9935 ;
G_219GAT_50[1] = 9935 ;
G_228GAT_51[0] = 15991 ;
G_228GAT_51[1] = 15991 ;
G_237GAT_52[0] = 8240 ;
G_237GAT_52[1] = 8240 ;
G_246GAT_53[0] = 15903 ;
G_246GAT_53[1] = 15903 ;
G_255GAT_54[0] = 25560 ;
G_255GAT_54[1] = 25560 ;
G_259GAT_55[0] = 17990 ;
G_259GAT_55[1] = 17990 ;
G_260GAT_56[0] = 16393 ;
G_260GAT_56[1] = 16393 ;
G_261GAT_57[0] = 8693 ;
G_261GAT_57[1] = 8693 ;
G_267GAT_58[0] = 2140 ;
G_267GAT_58[1] = 2140 ;
G_268GAT_59[0] = 59060 ;
G_268GAT_59[1] = 59060 ;

evaluate();
printIO(16);

G_1GAT_0[0] = 62908 ;
G_1GAT_0[1] = 62908 ;
G_8GAT_1[0] = 33211 ;
G_8GAT_1[1] = 33211 ;
G_13GAT_2[0] = 63189 ;
G_13GAT_2[1] = 63189 ;
G_17GAT_3[0] = 56584 ;
G_17GAT_3[1] = 56584 ;
G_26GAT_4[0] = 52802 ;
G_26GAT_4[1] = 52802 ;
G_29GAT_5[0] = 57184 ;
G_29GAT_5[1] = 57184 ;
G_36GAT_6[0] = 20603 ;
G_36GAT_6[1] = 20603 ;
G_42GAT_7[0] = 57386 ;
G_42GAT_7[1] = 57386 ;
G_51GAT_8[0] = 52234 ;
G_51GAT_8[1] = 52234 ;
G_55GAT_9[0] = 22950 ;
G_55GAT_9[1] = 22950 ;
G_59GAT_10[0] = 11190 ;
G_59GAT_10[1] = 11190 ;
G_68GAT_11[0] = 46328 ;
G_68GAT_11[1] = 46328 ;
G_72GAT_12[0] = 34430 ;
G_72GAT_12[1] = 34430 ;
G_73GAT_13[0] = 28501 ;
G_73GAT_13[1] = 28501 ;
G_74GAT_14[0] = 47838 ;
G_74GAT_14[1] = 47838 ;
G_75GAT_15[0] = 10653 ;
G_75GAT_15[1] = 10653 ;
G_80GAT_16[0] = 10048 ;
G_80GAT_16[1] = 10048 ;
G_85GAT_17[0] = 16592 ;
G_85GAT_17[1] = 16592 ;
G_86GAT_18[0] = 54097 ;
G_86GAT_18[1] = 54097 ;
G_87GAT_19[0] = 8259 ;
G_87GAT_19[1] = 8259 ;
G_88GAT_20[0] = 25800 ;
G_88GAT_20[1] = 25800 ;
G_89GAT_21[0] = 55552 ;
G_89GAT_21[1] = 55552 ;
G_90GAT_22[0] = 57332 ;
G_90GAT_22[1] = 57332 ;
G_91GAT_23[0] = 22668 ;
G_91GAT_23[1] = 22668 ;
G_96GAT_24[0] = 11032 ;
G_96GAT_24[1] = 11032 ;
G_101GAT_25[0] = 36567 ;
G_101GAT_25[1] = 36567 ;
G_106GAT_26[0] = 8781 ;
G_106GAT_26[1] = 8781 ;
G_111GAT_27[0] = 65497 ;
G_111GAT_27[1] = 65497 ;
G_116GAT_28[0] = 29267 ;
G_116GAT_28[1] = 29267 ;
G_121GAT_29[0] = 52252 ;
G_121GAT_29[1] = 52252 ;
G_126GAT_30[0] = 33745 ;
G_126GAT_30[1] = 33745 ;
G_130GAT_31[0] = 1132 ;
G_130GAT_31[1] = 1132 ;
G_135GAT_32[0] = 23887 ;
G_135GAT_32[1] = 23887 ;
G_138GAT_33[0] = 10208 ;
G_138GAT_33[1] = 10208 ;
G_143GAT_34[0] = 48400 ;
G_143GAT_34[1] = 48400 ;
G_146GAT_35[0] = 30938 ;
G_146GAT_35[1] = 30938 ;
G_149GAT_36[0] = 27739 ;
G_149GAT_36[1] = 27739 ;
G_152GAT_37[0] = 17154 ;
G_152GAT_37[1] = 17154 ;
G_153GAT_38[0] = 51152 ;
G_153GAT_38[1] = 51152 ;
G_156GAT_39[0] = 19070 ;
G_156GAT_39[1] = 19070 ;
G_159GAT_40[0] = 19251 ;
G_159GAT_40[1] = 19251 ;
G_165GAT_41[0] = 51001 ;
G_165GAT_41[1] = 51001 ;
G_171GAT_42[0] = 58233 ;
G_171GAT_42[1] = 58233 ;
G_177GAT_43[0] = 9124 ;
G_177GAT_43[1] = 9124 ;
G_183GAT_44[0] = 17881 ;
G_183GAT_44[1] = 17881 ;
G_189GAT_45[0] = 49079 ;
G_189GAT_45[1] = 49079 ;
G_195GAT_46[0] = 30239 ;
G_195GAT_46[1] = 30239 ;
G_201GAT_47[0] = 39069 ;
G_201GAT_47[1] = 39069 ;
G_207GAT_48[0] = 59106 ;
G_207GAT_48[1] = 59106 ;
G_210GAT_49[0] = 42189 ;
G_210GAT_49[1] = 42189 ;
G_219GAT_50[0] = 40303 ;
G_219GAT_50[1] = 40303 ;
G_228GAT_51[0] = 1361 ;
G_228GAT_51[1] = 1361 ;
G_237GAT_52[0] = 56085 ;
G_237GAT_52[1] = 56085 ;
G_246GAT_53[0] = 2676 ;
G_246GAT_53[1] = 2676 ;
G_255GAT_54[0] = 44396 ;
G_255GAT_54[1] = 44396 ;
G_259GAT_55[0] = 58648 ;
G_259GAT_55[1] = 58648 ;
G_260GAT_56[0] = 12523 ;
G_260GAT_56[1] = 12523 ;
G_261GAT_57[0] = 32812 ;
G_261GAT_57[1] = 32812 ;
G_267GAT_58[0] = 20655 ;
G_267GAT_58[1] = 20655 ;
G_268GAT_59[0] = 2347 ;
G_268GAT_59[1] = 2347 ;

evaluate();
printIO(16);

G_1GAT_0[0] = 62906 ;
G_1GAT_0[1] = 62906 ;
G_8GAT_1[0] = 33206 ;
G_8GAT_1[1] = 33206 ;
G_13GAT_2[0] = 63196 ;
G_13GAT_2[1] = 63196 ;
G_17GAT_3[0] = 56589 ;
G_17GAT_3[1] = 56589 ;
G_26GAT_4[0] = 52805 ;
G_26GAT_4[1] = 52805 ;
G_29GAT_5[0] = 57199 ;
G_29GAT_5[1] = 57199 ;
G_36GAT_6[0] = 20593 ;
G_36GAT_6[1] = 20593 ;
G_42GAT_7[0] = 57389 ;
G_42GAT_7[1] = 57389 ;
G_51GAT_8[0] = 52224 ;
G_51GAT_8[1] = 52224 ;
G_55GAT_9[0] = 22952 ;
G_55GAT_9[1] = 22952 ;
G_59GAT_10[0] = 11191 ;
G_59GAT_10[1] = 11191 ;
G_68GAT_11[0] = 46328 ;
G_68GAT_11[1] = 46328 ;
G_72GAT_12[0] = 34426 ;
G_72GAT_12[1] = 34426 ;
G_73GAT_13[0] = 28511 ;
G_73GAT_13[1] = 28511 ;
G_74GAT_14[0] = 47824 ;
G_74GAT_14[1] = 47824 ;
G_75GAT_15[0] = 10640 ;
G_75GAT_15[1] = 10640 ;
G_80GAT_16[0] = 10048 ;
G_80GAT_16[1] = 10048 ;
G_85GAT_17[0] = 16593 ;
G_85GAT_17[1] = 16593 ;
G_86GAT_18[0] = 54107 ;
G_86GAT_18[1] = 54107 ;
G_87GAT_19[0] = 8270 ;
G_87GAT_19[1] = 8270 ;
G_88GAT_20[0] = 25807 ;
G_88GAT_20[1] = 25807 ;
G_89GAT_21[0] = 55567 ;
G_89GAT_21[1] = 55567 ;
G_90GAT_22[0] = 57330 ;
G_90GAT_22[1] = 57330 ;
G_91GAT_23[0] = 22665 ;
G_91GAT_23[1] = 22665 ;
G_96GAT_24[0] = 11027 ;
G_96GAT_24[1] = 11027 ;
G_101GAT_25[0] = 36570 ;
G_101GAT_25[1] = 36570 ;
G_106GAT_26[0] = 8771 ;
G_106GAT_26[1] = 8771 ;
G_111GAT_27[0] = 65490 ;
G_111GAT_27[1] = 65490 ;
G_116GAT_28[0] = 29265 ;
G_116GAT_28[1] = 29265 ;
G_121GAT_29[0] = 52250 ;
G_121GAT_29[1] = 52250 ;
G_126GAT_30[0] = 33750 ;
G_126GAT_30[1] = 33750 ;
G_130GAT_31[0] = 1128 ;
G_130GAT_31[1] = 1128 ;
G_135GAT_32[0] = 23882 ;
G_135GAT_32[1] = 23882 ;
G_138GAT_33[0] = 10214 ;
G_138GAT_33[1] = 10214 ;
G_143GAT_34[0] = 48415 ;
G_143GAT_34[1] = 48415 ;
G_146GAT_35[0] = 30939 ;
G_146GAT_35[1] = 30939 ;
G_149GAT_36[0] = 27738 ;
G_149GAT_36[1] = 27738 ;
G_152GAT_37[0] = 17162 ;
G_152GAT_37[1] = 17162 ;
G_153GAT_38[0] = 51157 ;
G_153GAT_38[1] = 51157 ;
G_156GAT_39[0] = 19069 ;
G_156GAT_39[1] = 19069 ;
G_159GAT_40[0] = 19263 ;
G_159GAT_40[1] = 19263 ;
G_165GAT_41[0] = 51003 ;
G_165GAT_41[1] = 51003 ;
G_171GAT_42[0] = 58225 ;
G_171GAT_42[1] = 58225 ;
G_177GAT_43[0] = 9126 ;
G_177GAT_43[1] = 9126 ;
G_183GAT_44[0] = 17886 ;
G_183GAT_44[1] = 17886 ;
G_189GAT_45[0] = 49082 ;
G_189GAT_45[1] = 49082 ;
G_195GAT_46[0] = 30237 ;
G_195GAT_46[1] = 30237 ;
G_201GAT_47[0] = 39065 ;
G_201GAT_47[1] = 39065 ;
G_207GAT_48[0] = 59118 ;
G_207GAT_48[1] = 59118 ;
G_210GAT_49[0] = 42183 ;
G_210GAT_49[1] = 42183 ;
G_219GAT_50[0] = 40291 ;
G_219GAT_50[1] = 40291 ;
G_228GAT_51[0] = 1372 ;
G_228GAT_51[1] = 1372 ;
G_237GAT_52[0] = 56092 ;
G_237GAT_52[1] = 56092 ;
G_246GAT_53[0] = 2672 ;
G_246GAT_53[1] = 2672 ;
G_255GAT_54[0] = 44391 ;
G_255GAT_54[1] = 44391 ;
G_259GAT_55[0] = 58652 ;
G_259GAT_55[1] = 58652 ;
G_260GAT_56[0] = 12512 ;
G_260GAT_56[1] = 12512 ;
G_261GAT_57[0] = 32809 ;
G_261GAT_57[1] = 32809 ;
G_267GAT_58[0] = 20642 ;
G_267GAT_58[1] = 20642 ;
G_268GAT_59[0] = 2343 ;
G_268GAT_59[1] = 2343 ;

evaluate();
printIO(4);

time_end = clock();
cout << "Total CPU Time = " << double(time_end - time_init)/CLOCKS_PER_SEC << endl;
system("ps aux | grep a.out ");
return 0;
}

void evaluate()
{
G_280GAT_108[0] = G_55GAT_9[0] ;
G_280GAT_108[1] = G_55GAT_9[1] ;
G_280GAT_108[0] &= G_13GAT_2[0] ;
G_280GAT_108[1] &= G_13GAT_2[1] ;
G_280GAT_108[0] &= G_8GAT_1[0] ;
G_280GAT_108[1] &= G_8GAT_1[1] ;
G_280GAT_108[0] &= G_1GAT_0[0] ;
G_280GAT_108[1] &= G_1GAT_0[1] ;
G_279GAT_109[0] = G_17GAT_3[0] ;
G_279GAT_109[1] = G_17GAT_3[1] ;
G_279GAT_109[0] &= G_51GAT_8[0] ;
G_279GAT_109[1] &= G_51GAT_8[1] ;
G_279GAT_109[0] &= G_8GAT_1[0] ;
G_279GAT_109[1] &= G_8GAT_1[1] ;
G_279GAT_109[0] &= G_1GAT_0[0] ;
G_279GAT_109[1] &= G_1GAT_0[1] ;
G_276GAT_110[0] = G_51GAT_8[0] ;
G_276GAT_110[1] = G_51GAT_8[1] ;
G_276GAT_110[0] &= G_26GAT_4[0] ;
G_276GAT_110[1] &= G_26GAT_4[1] ;
G_276GAT_110[0] &= G_1GAT_0[0] ;
G_276GAT_110[1] &= G_1GAT_0[1] ;
G_270GAT_111[0] = G_17GAT_3[0] ;
G_270GAT_111[1] = G_17GAT_3[1] ;
G_270GAT_111[0] &= G_13GAT_2[0] ;
G_270GAT_111[1] &= G_13GAT_2[1] ;
G_270GAT_111[0] &= G_26GAT_4[0] ;
G_270GAT_111[1] &= G_26GAT_4[1] ;
G_270GAT_111[0] &= G_1GAT_0[0] ;
G_270GAT_111[1] &= G_1GAT_0[1] ;
G_269GAT_112[0] = G_17GAT_3[0] ;
G_269GAT_112[1] = G_17GAT_3[1] ;
G_269GAT_112[0] &= G_13GAT_2[0] ;
G_269GAT_112[1] &= G_13GAT_2[1] ;
G_269GAT_112[0] &= G_8GAT_1[0] ;
G_269GAT_112[1] &= G_8GAT_1[1] ;
G_269GAT_112[0] &= G_1GAT_0[0] ;
G_269GAT_112[1] &= G_1GAT_0[1] ;
G_309GAT_107[0] = G_138GAT_33[0] ;
G_309GAT_107[1] = G_138GAT_33[1] ;
G_309GAT_107[0] &= G_8GAT_1[0] ;
G_309GAT_107[1] &= G_8GAT_1[1] ;
G_323GAT_104[0] = G_42GAT_7[0] ;
G_323GAT_104[1] = G_42GAT_7[1] ;
G_323GAT_104[0] &= G_17GAT_3[0] ;
G_323GAT_104[1] &= G_17GAT_3[1] ;
G_17GAT_3b[0] = G_17GAT_3[0] ;
G_17GAT_3b[1] = G_17GAT_3[1] ;
temp = G_17GAT_3b[0] ;
G_17GAT_3b[0] = ~G_17GAT_3b[1] ;
G_17GAT_3b[1] = ~temp ;
G_317GAT_106[0] = G_138GAT_33[0] ;
G_317GAT_106[1] = G_138GAT_33[1] ;
G_317GAT_106[0] &= G_17GAT_3[0] ;
G_317GAT_106[1] &= G_17GAT_3[1] ;
G_290GAT_100[0] = G_42GAT_7[0] ;
G_290GAT_100[1] = G_42GAT_7[1] ;
G_290GAT_100[0] &= G_75GAT_15[0] ;
G_290GAT_100[1] &= G_75GAT_15[1] ;
G_290GAT_100[0] &= G_29GAT_5[0] ;
G_290GAT_100[1] &= G_29GAT_5[1] ;
G_291GAT_99[0] = G_80GAT_16[0] ;
G_291GAT_99[1] = G_80GAT_16[1] ;
G_291GAT_99[0] &= G_36GAT_6[0] ;
G_291GAT_99[1] &= G_36GAT_6[1] ;
G_291GAT_99[0] &= G_29GAT_5[0] ;
G_291GAT_99[1] &= G_29GAT_5[1] ;
G_292GAT_98[0] = G_42GAT_7[0] ;
G_292GAT_98[1] = G_42GAT_7[1] ;
G_292GAT_98[0] &= G_36GAT_6[0] ;
G_292GAT_98[1] &= G_36GAT_6[1] ;
G_292GAT_98[0] &= G_29GAT_5[0] ;
G_292GAT_98[1] &= G_29GAT_5[1] ;
G_287GAT_101[0] = G_80GAT_16[0] ;
G_287GAT_101[1] = G_80GAT_16[1] ;
G_287GAT_101[0] &= G_75GAT_15[0] ;
G_287GAT_101[1] &= G_75GAT_15[1] ;
G_287GAT_101[0] &= G_29GAT_5[0] ;
G_287GAT_101[1] &= G_29GAT_5[1] ;
G_285GAT_102[0] = G_68GAT_11[0] ;
G_285GAT_102[1] = G_68GAT_11[1] ;
G_285GAT_102[0] &= G_29GAT_5[0] ;
G_285GAT_102[1] &= G_29GAT_5[1] ;
G_273GAT_103[0] = G_42GAT_7[0] ;
G_273GAT_103[1] = G_42GAT_7[1] ;
G_273GAT_103[0] &= G_36GAT_6[0] ;
G_273GAT_103[1] &= G_36GAT_6[1] ;
G_273GAT_103[0] &= G_29GAT_5[0] ;
G_273GAT_103[1] &= G_29GAT_5[1] ;
G_296GAT_96[0] = G_42GAT_7[0] ;
G_296GAT_96[1] = G_42GAT_7[1] ;
G_296GAT_96[0] &= G_36GAT_6[0] ;
G_296GAT_96[1] &= G_36GAT_6[1] ;
G_296GAT_96[0] &= G_59GAT_10[0] ;
G_296GAT_96[1] &= G_59GAT_10[1] ;
G_295GAT_97[0] = G_80GAT_16[0] ;
G_295GAT_97[1] = G_80GAT_16[1] ;
G_295GAT_97[0] &= G_36GAT_6[0] ;
G_295GAT_97[1] &= G_36GAT_6[1] ;
G_295GAT_97[0] &= G_59GAT_10[0] ;
G_295GAT_97[1] &= G_59GAT_10[1] ;
G_294GAT_94[0] = G_42GAT_7[0] ;
G_294GAT_94[1] = G_42GAT_7[1] ;
G_294GAT_94[0] &= G_75GAT_15[0] ;
G_294GAT_94[1] &= G_75GAT_15[1] ;
G_294GAT_94[0] &= G_59GAT_10[0] ;
G_294GAT_94[1] &= G_59GAT_10[1] ;
G_284GAT_95[0] = G_72GAT_12[0] ;
G_284GAT_95[1] = G_72GAT_12[1] ;
G_284GAT_95[0] &= G_68GAT_11[0] ;
G_284GAT_95[1] &= G_68GAT_11[1] ;
G_284GAT_95[0] &= G_42GAT_7[0] ;
G_284GAT_95[1] &= G_42GAT_7[1] ;
G_284GAT_95[0] &= G_59GAT_10[0] ;
G_284GAT_95[1] &= G_59GAT_10[1] ;
G_42GAT_7b[0] = G_42GAT_7[0] ;
G_42GAT_7b[1] = G_42GAT_7[1] ;
temp = G_42GAT_7b[0] ;
G_42GAT_7b[0] = ~G_42GAT_7b[1] ;
G_42GAT_7b[1] = ~temp ;
G_316GAT_93[0] = G_138GAT_33[0] ;
G_316GAT_93[1] = G_138GAT_33[1] ;
G_316GAT_93[0] &= G_51GAT_8[0] ;
G_316GAT_93[1] &= G_51GAT_8[1] ;
G_319GAT_90[0] = G_156GAT_39[0] ;
G_319GAT_90[1] = G_156GAT_39[1] ;
G_319GAT_90[0] &= G_59GAT_10[0] ;
G_319GAT_90[1] &= G_59GAT_10[1] ;
G_293GAT_91[0] = G_80GAT_16[0] ;
G_293GAT_91[1] = G_80GAT_16[1] ;
G_293GAT_91[0] &= G_75GAT_15[0] ;
G_293GAT_91[1] &= G_75GAT_15[1] ;
G_293GAT_91[0] &= G_59GAT_10[0] ;
G_293GAT_91[1] &= G_59GAT_10[1] ;
G_286GAT_92[0] = G_74GAT_14[0] ;
G_286GAT_92[1] = G_74GAT_14[1] ;
G_286GAT_92[0] &= G_68GAT_11[0] ;
G_286GAT_92[1] &= G_68GAT_11[1] ;
G_286GAT_92[0] &= G_59GAT_10[0] ;
G_286GAT_92[1] &= G_59GAT_10[1] ;
G_297GAT_89[0] = G_86GAT_18[0] ;
G_297GAT_89[1] = G_86GAT_18[1] ;
G_297GAT_89[0] &= G_85GAT_17[0] ;
G_297GAT_89[1] &= G_85GAT_17[1] ;
G_87GAT_19b[0] = G_87GAT_19[0] ;
G_87GAT_19b[1] = G_87GAT_19[1] ;
temp = G_87GAT_19b[0] ;
G_87GAT_19b[0] = ~G_87GAT_19b[1] ;
G_87GAT_19b[1] = ~temp ;
G_88GAT_20b[0] = G_88GAT_20[0] ;
G_88GAT_20b[1] = G_88GAT_20[1] ;
temp = G_88GAT_20b[0] ;
G_88GAT_20b[0] = ~G_88GAT_20b[1] ;
G_88GAT_20b[1] = ~temp ;
G_332GAT_85[0] = G_91GAT_23[0] ;
G_332GAT_85[1] = G_91GAT_23[1] ;
G_332GAT_85[0] &= G_210GAT_49[0] ;
G_332GAT_85[1] &= G_210GAT_49[1] ;
G_91GAT_23b[0] = G_91GAT_23[0] ;
G_91GAT_23b[1] = G_91GAT_23[1] ;
temp = G_91GAT_23b[0] ;
G_91GAT_23b[0] = ~G_91GAT_23b[1] ;
G_91GAT_23b[1] = ~temp ;
G_301GAT_87[0] = G_96GAT_24[0] ;
G_301GAT_87[1] = G_96GAT_24[1] ;
G_301GAT_87[0] &= G_91GAT_23[0] ;
G_301GAT_87[1] &= G_91GAT_23[1] ;
G_333GAT_84[0] = G_96GAT_24[0] ;
G_333GAT_84[1] = G_96GAT_24[1] ;
G_333GAT_84[0] &= G_210GAT_49[0] ;
G_333GAT_84[1] &= G_210GAT_49[1] ;
G_96GAT_24b[0] = G_96GAT_24[0] ;
G_96GAT_24b[1] = G_96GAT_24[1] ;
temp = G_96GAT_24b[0] ;
G_96GAT_24b[0] = ~G_96GAT_24b[1] ;
G_96GAT_24b[1] = ~temp ;
G_334GAT_81[0] = G_101GAT_25[0] ;
G_334GAT_81[1] = G_101GAT_25[1] ;
G_334GAT_81[0] &= G_210GAT_49[0] ;
G_334GAT_81[1] &= G_210GAT_49[1] ;
G_101GAT_25b[0] = G_101GAT_25[0] ;
G_101GAT_25b[1] = G_101GAT_25[1] ;
temp = G_101GAT_25b[0] ;
G_101GAT_25b[0] = ~G_101GAT_25b[1] ;
G_101GAT_25b[1] = ~temp ;
G_303GAT_83[0] = G_106GAT_26[0] ;
G_303GAT_83[1] = G_106GAT_26[1] ;
G_303GAT_83[0] &= G_101GAT_25[0] ;
G_303GAT_83[1] &= G_101GAT_25[1] ;
G_335GAT_80[0] = G_106GAT_26[0] ;
G_335GAT_80[1] = G_106GAT_26[1] ;
G_335GAT_80[0] &= G_210GAT_49[0] ;
G_335GAT_80[1] &= G_210GAT_49[1] ;
G_106GAT_26b[0] = G_106GAT_26[0] ;
G_106GAT_26b[1] = G_106GAT_26[1] ;
temp = G_106GAT_26b[0] ;
G_106GAT_26b[0] = ~G_106GAT_26b[1] ;
G_106GAT_26b[1] = ~temp ;
G_336GAT_77[0] = G_111GAT_27[0] ;
G_336GAT_77[1] = G_111GAT_27[1] ;
G_336GAT_77[0] &= G_210GAT_49[0] ;
G_336GAT_77[1] &= G_210GAT_49[1] ;
G_111GAT_27b[0] = G_111GAT_27[0] ;
G_111GAT_27b[1] = G_111GAT_27[1] ;
temp = G_111GAT_27b[0] ;
G_111GAT_27b[0] = ~G_111GAT_27b[1] ;
G_111GAT_27b[1] = ~temp ;
G_305GAT_79[0] = G_116GAT_28[0] ;
G_305GAT_79[1] = G_116GAT_28[1] ;
G_305GAT_79[0] &= G_111GAT_27[0] ;
G_305GAT_79[1] &= G_111GAT_27[1] ;
G_338GAT_76[0] = G_116GAT_28[0] ;
G_338GAT_76[1] = G_116GAT_28[1] ;
G_338GAT_76[0] &= G_210GAT_49[0] ;
G_338GAT_76[1] &= G_210GAT_49[1] ;
G_116GAT_28b[0] = G_116GAT_28[0] ;
G_116GAT_28b[1] = G_116GAT_28[1] ;
temp = G_116GAT_28b[0] ;
G_116GAT_28b[0] = ~G_116GAT_28b[1] ;
G_116GAT_28b[1] = ~temp ;
G_340GAT_73[0] = G_121GAT_29[0] ;
G_340GAT_73[1] = G_121GAT_29[1] ;
G_340GAT_73[0] &= G_210GAT_49[0] ;
G_340GAT_73[1] &= G_210GAT_49[1] ;
G_121GAT_29b[0] = G_121GAT_29[0] ;
G_121GAT_29b[1] = G_121GAT_29[1] ;
temp = G_121GAT_29b[0] ;
G_121GAT_29b[0] = ~G_121GAT_29b[1] ;
G_121GAT_29b[1] = ~temp ;
G_307GAT_75[0] = G_126GAT_30[0] ;
G_307GAT_75[1] = G_126GAT_30[1] ;
G_307GAT_75[0] &= G_121GAT_29[0] ;
G_307GAT_75[1] &= G_121GAT_29[1] ;
G_126GAT_30b[0] = G_126GAT_30[0] ;
G_126GAT_30b[1] = G_126GAT_30[1] ;
temp = G_126GAT_30b[0] ;
G_126GAT_30b[0] = ~G_126GAT_30b[1] ;
G_126GAT_30b[1] = ~temp ;
G_130GAT_31b[0] = G_130GAT_31[0] ;
G_130GAT_31b[1] = G_130GAT_31[1] ;
temp = G_130GAT_31b[0] ;
G_130GAT_31b[0] = ~G_130GAT_31b[1] ;
G_130GAT_31b[1] = ~temp ;
G_135GAT_32b[0] = G_135GAT_32[0] ;
G_135GAT_32b[1] = G_135GAT_32[1] ;
temp = G_135GAT_32b[0] ;
G_135GAT_32b[0] = ~G_135GAT_32b[1] ;
G_135GAT_32b[1] = ~temp ;
G_318GAT_72[0] = G_138GAT_33[0] ;
G_318GAT_72[1] = G_138GAT_33[1] ;
G_318GAT_72[0] &= G_152GAT_37[0] ;
G_318GAT_72[1] &= G_152GAT_37[1] ;
G_159GAT_40b[0] = G_159GAT_40[0] ;
G_159GAT_40b[1] = G_159GAT_40[1] ;
temp = G_159GAT_40b[0] ;
G_159GAT_40b[0] = ~G_159GAT_40b[1] ;
G_159GAT_40b[1] = ~temp ;
G_324GAT_71[0] = G_165GAT_41[0] ;
G_324GAT_71[1] = G_165GAT_41[1] ;
G_324GAT_71[0] &= G_159GAT_40[0] ;
G_324GAT_71[1] &= G_159GAT_40[1] ;
G_165GAT_41b[0] = G_165GAT_41[0] ;
G_165GAT_41b[1] = G_165GAT_41[1] ;
temp = G_165GAT_41b[0] ;
G_165GAT_41b[0] = ~G_165GAT_41b[1] ;
G_165GAT_41b[1] = ~temp ;
G_171GAT_42b[0] = G_171GAT_42[0] ;
G_171GAT_42b[1] = G_171GAT_42[1] ;
temp = G_171GAT_42b[0] ;
G_171GAT_42b[0] = ~G_171GAT_42b[1] ;
G_171GAT_42b[1] = ~temp ;
G_326GAT_69[0] = G_177GAT_43[0] ;
G_326GAT_69[1] = G_177GAT_43[1] ;
G_326GAT_69[0] &= G_171GAT_42[0] ;
G_326GAT_69[1] &= G_171GAT_42[1] ;
G_177GAT_43b[0] = G_177GAT_43[0] ;
G_177GAT_43b[1] = G_177GAT_43[1] ;
temp = G_177GAT_43b[0] ;
G_177GAT_43b[0] = ~G_177GAT_43b[1] ;
G_177GAT_43b[1] = ~temp ;
G_183GAT_44b[0] = G_183GAT_44[0] ;
G_183GAT_44b[1] = G_183GAT_44[1] ;
temp = G_183GAT_44b[0] ;
G_183GAT_44b[0] = ~G_183GAT_44b[1] ;
G_183GAT_44b[1] = ~temp ;
G_328GAT_67[0] = G_189GAT_45[0] ;
G_328GAT_67[1] = G_189GAT_45[1] ;
G_328GAT_67[0] &= G_183GAT_44[0] ;
G_328GAT_67[1] &= G_183GAT_44[1] ;
G_189GAT_45b[0] = G_189GAT_45[0] ;
G_189GAT_45b[1] = G_189GAT_45[1] ;
temp = G_189GAT_45b[0] ;
G_189GAT_45b[0] = ~G_189GAT_45b[1] ;
G_189GAT_45b[1] = ~temp ;
G_195GAT_46b[0] = G_195GAT_46[0] ;
G_195GAT_46b[1] = G_195GAT_46[1] ;
temp = G_195GAT_46b[0] ;
G_195GAT_46b[0] = ~G_195GAT_46b[1] ;
G_195GAT_46b[1] = ~temp ;
G_330GAT_65[0] = G_201GAT_47[0] ;
G_330GAT_65[1] = G_201GAT_47[1] ;
G_330GAT_65[0] &= G_195GAT_46[0] ;
G_330GAT_65[1] &= G_195GAT_46[1] ;
G_201GAT_47b[0] = G_201GAT_47[0] ;
G_201GAT_47b[1] = G_201GAT_47[1] ;
temp = G_201GAT_47b[0] ;
G_201GAT_47b[0] = ~G_201GAT_47b[1] ;
G_201GAT_47b[1] = ~temp ;
G_207GAT_48b[0] = G_207GAT_48[0] ;
G_207GAT_48b[1] = G_207GAT_48[1] ;
temp = G_207GAT_48b[0] ;
G_207GAT_48b[0] = ~G_207GAT_48b[1] ;
G_207GAT_48b[1] = ~temp ;
G_341GAT_61[0] = G_267GAT_58[0] ;
G_341GAT_61[1] = G_267GAT_58[1] ;
G_341GAT_61[0] &= G_255GAT_54[0] ;
G_341GAT_61[1] &= G_255GAT_54[1] ;
G_339GAT_62[0] = G_260GAT_56[0] ;
G_339GAT_62[1] = G_260GAT_56[1] ;
G_339GAT_62[0] &= G_255GAT_54[0] ;
G_339GAT_62[1] &= G_255GAT_54[1] ;
G_337GAT_63[0] = G_259GAT_55[0] ;
G_337GAT_63[1] = G_259GAT_55[1] ;
G_337GAT_63[0] &= G_255GAT_54[0] ;
G_337GAT_63[1] &= G_255GAT_54[1] ;
G_261GAT_57b[0] = G_261GAT_57[0] ;
G_261GAT_57b[1] = G_261GAT_57[1] ;
temp = G_261GAT_57b[0] ;
G_261GAT_57b[0] = ~G_261GAT_57b[1] ;
G_261GAT_57b[1] = ~temp ;
G_341GAT_61b[0] = G_341GAT_61[0] ;
G_341GAT_61b[1] = G_341GAT_61[1] ;
temp = G_341GAT_61b[0] ;
G_341GAT_61b[0] = ~G_341GAT_61b[1] ;
G_341GAT_61b[1] = ~temp ;
G_339GAT_62b[0] = G_339GAT_62[0] ;
G_339GAT_62b[1] = G_339GAT_62[1] ;
temp = G_339GAT_62b[0] ;
G_339GAT_62b[0] = ~G_339GAT_62b[1] ;
G_339GAT_62b[1] = ~temp ;
G_337GAT_63b[0] = G_337GAT_63[0] ;
G_337GAT_63b[1] = G_337GAT_63[1] ;
temp = G_337GAT_63b[0] ;
G_337GAT_63b[0] = ~G_337GAT_63b[1] ;
G_337GAT_63b[1] = ~temp ;
G_331GAT_64[0] = G_201GAT_47b[0] ;
G_331GAT_64[1] = G_201GAT_47b[1] ;
G_331GAT_64[0] &= G_195GAT_46b[0] ;
G_331GAT_64[1] &= G_195GAT_46b[1] ;
G_329GAT_66[0] = G_189GAT_45b[0] ;
G_329GAT_66[1] = G_189GAT_45b[1] ;
G_329GAT_66[0] &= G_183GAT_44b[0] ;
G_329GAT_66[1] &= G_183GAT_44b[1] ;
G_327GAT_68[0] = G_177GAT_43b[0] ;
G_327GAT_68[1] = G_177GAT_43b[1] ;
G_327GAT_68[0] &= G_171GAT_42b[0] ;
G_327GAT_68[1] &= G_171GAT_42b[1] ;
G_325GAT_70[0] = G_165GAT_41b[0] ;
G_325GAT_70[1] = G_165GAT_41b[1] ;
G_325GAT_70[0] &= G_159GAT_40b[0] ;
G_325GAT_70[1] &= G_159GAT_40b[1] ;
G_318GAT_72b[0] = G_318GAT_72[0] ;
G_318GAT_72b[1] = G_318GAT_72[1] ;
temp = G_318GAT_72b[0] ;
G_318GAT_72b[0] = ~G_318GAT_72b[1] ;
G_318GAT_72b[1] = ~temp ;
G_340GAT_73b[0] = G_340GAT_73[0] ;
G_340GAT_73b[1] = G_340GAT_73[1] ;
temp = G_340GAT_73b[0] ;
G_340GAT_73b[0] = ~G_340GAT_73b[1] ;
G_340GAT_73b[1] = ~temp ;
G_308GAT_74[0] = G_126GAT_30b[0] ;
G_308GAT_74[1] = G_126GAT_30b[1] ;
G_308GAT_74[0] &= G_121GAT_29b[0] ;
G_308GAT_74[1] &= G_121GAT_29b[1] ;
G_338GAT_76b[0] = G_338GAT_76[0] ;
G_338GAT_76b[1] = G_338GAT_76[1] ;
temp = G_338GAT_76b[0] ;
G_338GAT_76b[0] = ~G_338GAT_76b[1] ;
G_338GAT_76b[1] = ~temp ;
G_336GAT_77b[0] = G_336GAT_77[0] ;
G_336GAT_77b[1] = G_336GAT_77[1] ;
temp = G_336GAT_77b[0] ;
G_336GAT_77b[0] = ~G_336GAT_77b[1] ;
G_336GAT_77b[1] = ~temp ;
G_306GAT_78[0] = G_116GAT_28b[0] ;
G_306GAT_78[1] = G_116GAT_28b[1] ;
G_306GAT_78[0] &= G_111GAT_27b[0] ;
G_306GAT_78[1] &= G_111GAT_27b[1] ;
G_335GAT_80b[0] = G_335GAT_80[0] ;
G_335GAT_80b[1] = G_335GAT_80[1] ;
temp = G_335GAT_80b[0] ;
G_335GAT_80b[0] = ~G_335GAT_80b[1] ;
G_335GAT_80b[1] = ~temp ;
G_334GAT_81b[0] = G_334GAT_81[0] ;
G_334GAT_81b[1] = G_334GAT_81[1] ;
temp = G_334GAT_81b[0] ;
G_334GAT_81b[0] = ~G_334GAT_81b[1] ;
G_334GAT_81b[1] = ~temp ;
G_304GAT_82[0] = G_106GAT_26b[0] ;
G_304GAT_82[1] = G_106GAT_26b[1] ;
G_304GAT_82[0] &= G_101GAT_25b[0] ;
G_304GAT_82[1] &= G_101GAT_25b[1] ;
G_333GAT_84b[0] = G_333GAT_84[0] ;
G_333GAT_84b[1] = G_333GAT_84[1] ;
temp = G_333GAT_84b[0] ;
G_333GAT_84b[0] = ~G_333GAT_84b[1] ;
G_333GAT_84b[1] = ~temp ;
G_332GAT_85b[0] = G_332GAT_85[0] ;
G_332GAT_85b[1] = G_332GAT_85[1] ;
temp = G_332GAT_85b[0] ;
G_332GAT_85b[0] = ~G_332GAT_85b[1] ;
G_332GAT_85b[1] = ~temp ;
G_302GAT_86[0] = G_96GAT_24b[0] ;
G_302GAT_86[1] = G_96GAT_24b[1] ;
G_302GAT_86[0] &= G_91GAT_23b[0] ;
G_302GAT_86[1] &= G_91GAT_23b[1] ;
G_298GAT_88[0] = G_88GAT_20b[0] ;
G_298GAT_88[1] = G_88GAT_20b[1] ;
G_298GAT_88[0] &= G_87GAT_19b[0] ;
G_298GAT_88[1] &= G_87GAT_19b[1] ;
G_286GAT_92b[0] = G_286GAT_92[0] ;
G_286GAT_92b[1] = G_286GAT_92[1] ;
temp = G_286GAT_92b[0] ;
G_286GAT_92b[0] = ~G_286GAT_92b[1] ;
G_286GAT_92b[1] = ~temp ;
G_316GAT_93b[0] = G_316GAT_93[0] ;
G_316GAT_93b[1] = G_316GAT_93[1] ;
temp = G_316GAT_93b[0] ;
G_316GAT_93b[0] = ~G_316GAT_93b[1] ;
G_316GAT_93b[1] = ~temp ;
G_284GAT_95b[0] = G_284GAT_95[0] ;
G_284GAT_95b[1] = G_284GAT_95[1] ;
temp = G_284GAT_95b[0] ;
G_284GAT_95b[0] = ~G_284GAT_95b[1] ;
G_284GAT_95b[1] = ~temp ;
G_285GAT_102b[0] = G_285GAT_102[0] ;
G_285GAT_102b[1] = G_285GAT_102[1] ;
temp = G_285GAT_102b[0] ;
G_285GAT_102b[0] = ~G_285GAT_102b[1] ;
G_285GAT_102b[1] = ~temp ;
G_273GAT_103b[0] = G_273GAT_103[0] ;
G_273GAT_103b[1] = G_273GAT_103[1] ;
temp = G_273GAT_103b[0] ;
G_273GAT_103b[0] = ~G_273GAT_103b[1] ;
G_273GAT_103b[1] = ~temp ;
G_323GAT_104b[0] = G_323GAT_104[0] ;
G_323GAT_104b[1] = G_323GAT_104[1] ;
temp = G_323GAT_104b[0] ;
G_323GAT_104b[0] = ~G_323GAT_104b[1] ;
G_323GAT_104b[1] = ~temp ;
G_322GAT_105[0] = G_42GAT_7b[0] ;
G_322GAT_105[1] = G_42GAT_7b[1] ;
G_322GAT_105[0] &= G_17GAT_3b[0] ;
G_322GAT_105[1] &= G_17GAT_3b[1] ;
G_317GAT_106b[0] = G_317GAT_106[0] ;
G_317GAT_106b[1] = G_317GAT_106[1] ;
temp = G_317GAT_106b[0] ;
G_317GAT_106b[0] = ~G_317GAT_106b[1] ;
G_317GAT_106b[1] = ~temp ;
G_309GAT_107b[0] = G_309GAT_107[0] ;
G_309GAT_107b[1] = G_309GAT_107[1] ;
temp = G_309GAT_107b[0] ;
G_309GAT_107b[0] = ~G_309GAT_107b[1] ;
G_309GAT_107b[1] = ~temp ;
G_280GAT_108b[0] = G_280GAT_108[0] ;
G_280GAT_108b[1] = G_280GAT_108[1] ;
temp = G_280GAT_108b[0] ;
G_280GAT_108b[0] = ~G_280GAT_108b[1] ;
G_280GAT_108b[1] = ~temp ;
G_270GAT_111b[0] = G_270GAT_111[0] ;
G_270GAT_111b[1] = G_270GAT_111[1] ;
temp = G_270GAT_111b[0] ;
G_270GAT_111b[0] = ~G_270GAT_111b[1] ;
G_270GAT_111b[1] = ~temp ;
G_355GAT_123[0] = G_298GAT_88[0] ;
G_355GAT_123[1] = G_298GAT_88[1] ;
G_355GAT_123[0] &= G_89GAT_21[0] ;
G_355GAT_123[1] &= G_89GAT_21[1] ;
G_356GAT_122[0] = G_298GAT_88[0] ;
G_356GAT_122[1] = G_298GAT_88[1] ;
G_356GAT_122[0] &= G_90GAT_22[0] ;
G_356GAT_122[1] &= G_90GAT_22[1] ;
G_417GAT_142[0] = G_369GAT_113[0] ;
G_417GAT_142[1] = G_369GAT_113[1] ;
G_417GAT_142[0] &= G_210GAT_49[0] ;
G_417GAT_142[1] &= G_210GAT_49[1] ;
G_385GAT_114[0] = G_331GAT_64[0] ;
G_385GAT_114[1] = G_331GAT_64[1] ;
G_385GAT_114[0] &= G_330GAT_65[0] ;
G_385GAT_114[1] &= G_330GAT_65[1] ;
G_382GAT_115[0] = G_329GAT_66[0] ;
G_382GAT_115[1] = G_329GAT_66[1] ;
G_382GAT_115[0] &= G_328GAT_67[0] ;
G_382GAT_115[1] &= G_328GAT_67[1] ;
G_379GAT_116[0] = G_327GAT_68[0] ;
G_379GAT_116[1] = G_327GAT_68[1] ;
G_379GAT_116[0] &= G_326GAT_69[0] ;
G_379GAT_116[1] &= G_326GAT_69[1] ;
G_376GAT_117[0] = G_325GAT_70[0] ;
G_376GAT_117[1] = G_325GAT_70[1] ;
G_376GAT_117[0] &= G_324GAT_71[0] ;
G_376GAT_117[1] &= G_324GAT_71[1] ;
G_366GAT_118[0] = G_308GAT_74[0] ;
G_366GAT_118[1] = G_308GAT_74[1] ;
G_366GAT_118[0] &= G_307GAT_75[0] ;
G_366GAT_118[1] &= G_307GAT_75[1] ;
G_363GAT_119[0] = G_306GAT_78[0] ;
G_363GAT_119[1] = G_306GAT_78[1] ;
G_363GAT_119[0] &= G_305GAT_79[0] ;
G_363GAT_119[1] &= G_305GAT_79[1] ;
G_360GAT_120[0] = G_304GAT_82[0] ;
G_360GAT_120[1] = G_304GAT_82[1] ;
G_360GAT_120[0] &= G_303GAT_83[0] ;
G_360GAT_120[1] &= G_303GAT_83[1] ;
G_357GAT_121[0] = G_302GAT_86[0] ;
G_357GAT_121[1] = G_302GAT_86[1] ;
G_357GAT_121[0] &= G_301GAT_87[0] ;
G_357GAT_121[1] &= G_301GAT_87[1] ;
G_322GAT_105b[0] = G_322GAT_105[0] ;
G_322GAT_105b[1] = G_322GAT_105[1] ;
temp = G_322GAT_105b[0] ;
G_322GAT_105b[0] = ~G_322GAT_105b[1] ;
G_322GAT_105b[1] = ~temp ;
G_369GAT_113b[0] = G_369GAT_113[0] ;
G_369GAT_113b[1] = G_369GAT_113[1] ;
temp = G_369GAT_113b[0] ;
G_369GAT_113b[0] = ~G_369GAT_113b[1] ;
G_369GAT_113b[1] = ~temp ;
G_350GAT_126[0] = G_286GAT_92b[0] ;
G_350GAT_126[1] = G_286GAT_92b[1] ;
G_350GAT_126[0] &= G_280GAT_108b[0] ;
G_350GAT_126[1] &= G_280GAT_108b[1] ;
G_348GAT_128[0] = G_284GAT_95b[0] ;
G_348GAT_128[1] = G_284GAT_95b[1] ;
G_348GAT_128[0] &= G_280GAT_108b[0] ;
G_348GAT_128[1] &= G_280GAT_108b[1] ;
G_349GAT_134[0] = G_285GAT_102b[0] ;
G_349GAT_134[1] = G_285GAT_102b[1] ;
G_349GAT_134[0] &= G_280GAT_108b[0] ;
G_349GAT_134[1] &= G_280GAT_108b[1] ;
G_410GAT_160[0] = G_352GAT_127[0] ;
G_410GAT_160[1] = G_352GAT_127[1] ;
G_410GAT_160[0] &= G_347GAT_138[0] ;
G_410GAT_160[1] &= G_347GAT_138[1] ;
G_343GAT_135b[0] = G_343GAT_135[0] ;
G_343GAT_135b[1] = G_343GAT_135[1] ;
temp = G_343GAT_135b[0] ;
G_343GAT_135b[0] = ~G_343GAT_135b[1] ;
G_343GAT_135b[1] = ~temp ;
G_344GAT_136[0] = G_273GAT_103b[0] ;
G_344GAT_136[1] = G_273GAT_103b[1] ;
G_344GAT_136[0] &= G_270GAT_111b[0] ;
G_344GAT_136[1] &= G_270GAT_111b[1] ;
G_443GAT_180[0] = G_17GAT_3[0] ;
G_443GAT_180[1] = G_17GAT_3[1] ;
G_443GAT_180[0] &= G_319GAT_90[0] ;
G_443GAT_180[1] &= G_319GAT_90[1] ;
G_443GAT_180[0] &= G_393GAT_165[0] ;
G_443GAT_180[1] &= G_393GAT_165[1] ;
G_432GAT_181[0] = G_287GAT_101[0] ;
G_432GAT_181[1] = G_287GAT_101[1] ;
G_432GAT_181[0] &= G_17GAT_3[0] ;
G_432GAT_181[1] &= G_17GAT_3[1] ;
G_432GAT_181[0] &= G_393GAT_165[0] ;
G_432GAT_181[1] &= G_393GAT_165[1] ;
G_437GAT_177[0] = G_55GAT_9[0] ;
G_437GAT_177[1] = G_55GAT_9[1] ;
G_437GAT_177[0] &= G_287GAT_101[0] ;
G_437GAT_177[1] &= G_287GAT_101[1] ;
G_437GAT_177[0] &= G_393GAT_165[0] ;
G_437GAT_177[1] &= G_393GAT_165[1] ;
G_427GAT_178[0] = G_55GAT_9[0] ;
G_427GAT_178[1] = G_55GAT_9[1] ;
G_427GAT_178[0] &= G_393GAT_165[0] ;
G_427GAT_178[1] &= G_393GAT_165[1] ;
G_427GAT_178[0] &= G_319GAT_90[0] ;
G_427GAT_178[1] &= G_319GAT_90[1] ;
G_400GAT_157[0] = G_73GAT_13[0] ;
G_400GAT_157[1] = G_73GAT_13[1] ;
G_400GAT_157[0] &= G_348GAT_128[0] ;
G_400GAT_157[1] &= G_348GAT_128[1] ;
G_416GAT_144[0] = G_385GAT_114[0] ;
G_416GAT_144[1] = G_385GAT_114[1] ;
G_416GAT_144[0] &= G_382GAT_115[0] ;
G_416GAT_144[1] &= G_382GAT_115[1] ;
G_413GAT_147[0] = G_379GAT_116[0] ;
G_413GAT_147[1] = G_379GAT_116[1] ;
G_413GAT_147[0] &= G_376GAT_117[0] ;
G_413GAT_147[1] &= G_376GAT_117[1] ;
G_409GAT_150[0] = G_366GAT_118[0] ;
G_409GAT_150[1] = G_366GAT_118[1] ;
G_409GAT_150[0] &= G_363GAT_119[0] ;
G_409GAT_150[1] &= G_363GAT_119[1] ;
G_406GAT_153[0] = G_360GAT_120[0] ;
G_406GAT_153[1] = G_360GAT_120[1] ;
G_406GAT_153[0] &= G_357GAT_121[0] ;
G_406GAT_153[1] &= G_357GAT_121[1] ;
G_392GAT_167[0] = G_343GAT_135b[0] ;
G_392GAT_167[1] = G_343GAT_135b[1] ;
G_392GAT_167[0] &= G_270GAT_111b[0] ;
G_392GAT_167[1] &= G_270GAT_111b[1] ;
G_375GAT_137[0] = G_323GAT_104b[0] ;
G_375GAT_137[1] = G_323GAT_104b[1] ;
G_375GAT_137[0] &= G_322GAT_105b[0] ;
G_375GAT_137[1] &= G_322GAT_105b[1] ;
G_417GAT_142b[0] = G_417GAT_142[0] ;
G_417GAT_142b[1] = G_417GAT_142[1] ;
temp = G_417GAT_142b[0] ;
G_417GAT_142b[0] = ~G_417GAT_142b[1] ;
G_417GAT_142b[1] = ~temp ;
G_483GAT_202[0] = G_1GAT_0[0] ;
G_483GAT_202[1] = G_1GAT_0[1] ;
G_483GAT_202[0] &= G_443GAT_180[0] ;
G_483GAT_202[1] &= G_443GAT_180[1] ;
G_442GAT_175[0] = G_393GAT_165[0] ;
G_442GAT_175[1] = G_393GAT_165[1] ;
G_442GAT_175[0] &= G_156GAT_39[0] ;
G_442GAT_175[1] &= G_156GAT_39[1] ;
G_442GAT_175[0] &= G_59GAT_10[0] ;
G_442GAT_175[1] &= G_59GAT_10[1] ;
G_442GAT_175[0] &= G_375GAT_137[0] ;
G_442GAT_175[1] &= G_375GAT_137[1] ;
G_475GAT_197[0] = G_427GAT_178[0] ;
G_475GAT_197[1] = G_427GAT_178[1] ;
G_475GAT_197[0] &= G_143GAT_34[0] ;
G_475GAT_197[1] &= G_143GAT_34[1] ;
G_477GAT_196[0] = G_427GAT_178[0] ;
G_477GAT_196[1] = G_427GAT_178[1] ;
G_477GAT_196[0] &= G_146GAT_35[0] ;
G_477GAT_196[1] &= G_146GAT_35[1] ;
G_479GAT_195[0] = G_427GAT_178[0] ;
G_479GAT_195[1] = G_427GAT_178[1] ;
G_479GAT_195[0] &= G_149GAT_36[0] ;
G_479GAT_195[1] &= G_149GAT_36[1] ;
G_481GAT_194[0] = G_427GAT_178[0] ;
G_481GAT_194[1] = G_427GAT_178[1] ;
G_481GAT_194[0] &= G_153GAT_38[0] ;
G_481GAT_194[1] &= G_153GAT_38[1] ;
G_476GAT_188[0] = G_432GAT_181[0] ;
G_476GAT_188[1] = G_432GAT_181[1] ;
G_476GAT_188[0] &= G_310GAT_60[0] ;
G_476GAT_188[1] &= G_310GAT_60[1] ;
G_478GAT_189[0] = G_432GAT_181[0] ;
G_478GAT_189[1] = G_432GAT_181[1] ;
G_478GAT_189[0] &= G_310GAT_60[0] ;
G_478GAT_189[1] &= G_310GAT_60[1] ;
G_480GAT_190[0] = G_432GAT_181[0] ;
G_480GAT_190[1] = G_432GAT_181[1] ;
G_480GAT_190[0] &= G_310GAT_60[0] ;
G_480GAT_190[1] &= G_310GAT_60[1] ;
G_482GAT_191[0] = G_432GAT_181[0] ;
G_482GAT_191[1] = G_432GAT_181[1] ;
G_482GAT_191[0] &= G_310GAT_60[0] ;
G_482GAT_191[1] &= G_310GAT_60[1] ;
G_445GAT_169[0] = G_415GAT_143[0] ;
G_445GAT_169[1] = G_415GAT_143[1] ;
G_445GAT_169[0] &= G_414GAT_145[0] ;
G_445GAT_169[1] &= G_414GAT_145[1] ;
G_416GAT_144b[0] = G_416GAT_144[0] ;
G_416GAT_144b[1] = G_416GAT_144[1] ;
temp = G_416GAT_144b[0] ;
G_416GAT_144b[0] = ~G_416GAT_144b[1] ;
G_416GAT_144b[1] = ~temp ;
G_444GAT_170[0] = G_412GAT_146[0] ;
G_444GAT_170[1] = G_412GAT_146[1] ;
G_444GAT_170[0] &= G_411GAT_148[0] ;
G_444GAT_170[1] &= G_411GAT_148[1] ;
G_413GAT_147b[0] = G_413GAT_147[0] ;
G_413GAT_147b[1] = G_413GAT_147[1] ;
temp = G_413GAT_147b[0] ;
G_413GAT_147b[0] = ~G_413GAT_147b[1] ;
G_413GAT_147b[1] = ~temp ;
G_426GAT_171[0] = G_408GAT_149[0] ;
G_426GAT_171[1] = G_408GAT_149[1] ;
G_426GAT_171[0] &= G_407GAT_151[0] ;
G_426GAT_171[1] &= G_407GAT_151[1] ;
G_409GAT_150b[0] = G_409GAT_150[0] ;
G_409GAT_150b[1] = G_409GAT_150[1] ;
temp = G_409GAT_150b[0] ;
G_409GAT_150b[0] = ~G_409GAT_150b[1] ;
G_409GAT_150b[1] = ~temp ;
G_425GAT_172[0] = G_405GAT_152[0] ;
G_425GAT_172[1] = G_405GAT_152[1] ;
G_425GAT_172[0] &= G_404GAT_154[0] ;
G_425GAT_172[1] &= G_404GAT_154[1] ;
G_406GAT_153b[0] = G_406GAT_153[0] ;
G_406GAT_153b[1] = G_406GAT_153[1] ;
temp = G_406GAT_153b[0] ;
G_406GAT_153b[0] = ~G_406GAT_153b[1] ;
G_406GAT_153b[1] = ~temp ;
G_437GAT_177b[0] = G_437GAT_177[0] ;
G_437GAT_177b[1] = G_437GAT_177[1] ;
temp = G_437GAT_177b[0] ;
G_437GAT_177b[0] = ~G_437GAT_177b[1] ;
G_437GAT_177b[1] = ~temp ;
G_510GAT_220[0] = G_483GAT_202[0] ;
G_510GAT_220[1] = G_483GAT_202[1] ;
G_510GAT_220[0] &= G_143GAT_34[0] ;
G_510GAT_220[1] &= G_143GAT_34[1] ;
G_512GAT_219[0] = G_483GAT_202[0] ;
G_512GAT_219[1] = G_483GAT_202[1] ;
G_512GAT_219[0] &= G_146GAT_35[0] ;
G_512GAT_219[1] &= G_146GAT_35[1] ;
G_514GAT_218[0] = G_483GAT_202[0] ;
G_514GAT_218[1] = G_483GAT_202[1] ;
G_514GAT_218[0] &= G_149GAT_36[0] ;
G_514GAT_218[1] &= G_149GAT_36[1] ;
G_516GAT_217[0] = G_483GAT_202[0] ;
G_516GAT_217[1] = G_483GAT_202[1] ;
G_516GAT_217[0] &= G_153GAT_38[0] ;
G_516GAT_217[1] &= G_153GAT_38[1] ;
G_466GAT_201[0] = G_410GAT_160[0] ;
G_466GAT_201[1] = G_410GAT_160[1] ;
G_466GAT_201[0] &= G_442GAT_175[0] ;
G_466GAT_201[1] &= G_442GAT_175[1] ;
G_445GAT_169b[0] = G_445GAT_169[0] ;
G_445GAT_169b[1] = G_445GAT_169[1] ;
temp = G_445GAT_169b[0] ;
G_445GAT_169b[0] = ~G_445GAT_169b[1] ;
G_445GAT_169b[1] = ~temp ;
G_444GAT_170b[0] = G_444GAT_170[0] ;
G_444GAT_170b[1] = G_444GAT_170[1] ;
temp = G_444GAT_170b[0] ;
G_444GAT_170b[0] = ~G_444GAT_170b[1] ;
G_444GAT_170b[1] = ~temp ;
G_426GAT_171b[0] = G_426GAT_171[0] ;
G_426GAT_171b[1] = G_426GAT_171[1] ;
temp = G_426GAT_171b[0] ;
G_426GAT_171b[0] = ~G_426GAT_171b[1] ;
G_426GAT_171b[1] = ~temp ;
G_425GAT_172b[0] = G_425GAT_172[0] ;
G_425GAT_172b[1] = G_425GAT_172[1] ;
temp = G_425GAT_172b[0] ;
G_425GAT_172b[0] = ~G_425GAT_172b[1] ;
G_425GAT_172b[1] = ~temp ;
G_488GAT_184[0] = G_437GAT_177b[0] ;
G_488GAT_184[1] = G_437GAT_177b[1] ;
G_488GAT_184[0] &= G_369GAT_113b[0] ;
G_488GAT_184[1] &= G_369GAT_113b[1] ;
G_489GAT_185[0] = G_437GAT_177b[0] ;
G_489GAT_185[1] = G_437GAT_177b[1] ;
G_489GAT_185[0] &= G_369GAT_113b[0] ;
G_489GAT_185[1] &= G_369GAT_113b[1] ;
G_490GAT_186[0] = G_437GAT_177b[0] ;
G_490GAT_186[1] = G_437GAT_177b[1] ;
G_490GAT_186[0] &= G_369GAT_113b[0] ;
G_490GAT_186[1] &= G_369GAT_113b[1] ;
G_491GAT_187[0] = G_437GAT_177b[0] ;
G_491GAT_187[1] = G_437GAT_177b[1] ;
G_491GAT_187[0] &= G_369GAT_113b[0] ;
G_491GAT_187[1] &= G_369GAT_113b[1] ;
G_476GAT_188b[0] = G_476GAT_188[0] ;
G_476GAT_188b[1] = G_476GAT_188[1] ;
temp = G_476GAT_188b[0] ;
G_476GAT_188b[0] = ~G_476GAT_188b[1] ;
G_476GAT_188b[1] = ~temp ;
G_478GAT_189b[0] = G_478GAT_189[0] ;
G_478GAT_189b[1] = G_478GAT_189[1] ;
temp = G_478GAT_189b[0] ;
G_478GAT_189b[0] = ~G_478GAT_189b[1] ;
G_478GAT_189b[1] = ~temp ;
G_480GAT_190b[0] = G_480GAT_190[0] ;
G_480GAT_190b[1] = G_480GAT_190[1] ;
temp = G_480GAT_190b[0] ;
G_480GAT_190b[0] = ~G_480GAT_190b[1] ;
G_480GAT_190b[1] = ~temp ;
G_482GAT_191b[0] = G_482GAT_191[0] ;
G_482GAT_191b[1] = G_482GAT_191[1] ;
temp = G_482GAT_191b[0] ;
G_482GAT_191b[0] = ~G_482GAT_191b[1] ;
G_482GAT_191b[1] = ~temp ;
G_481GAT_194b[0] = G_481GAT_194[0] ;
G_481GAT_194b[1] = G_481GAT_194[1] ;
temp = G_481GAT_194b[0] ;
G_481GAT_194b[0] = ~G_481GAT_194b[1] ;
G_481GAT_194b[1] = ~temp ;
G_479GAT_195b[0] = G_479GAT_195[0] ;
G_479GAT_195b[1] = G_479GAT_195[1] ;
temp = G_479GAT_195b[0] ;
G_479GAT_195b[0] = ~G_479GAT_195b[1] ;
G_479GAT_195b[1] = ~temp ;
G_477GAT_196b[0] = G_477GAT_196[0] ;
G_477GAT_196b[1] = G_477GAT_196[1] ;
temp = G_477GAT_196b[0] ;
G_477GAT_196b[0] = ~G_477GAT_196b[1] ;
G_477GAT_196b[1] = ~temp ;
G_475GAT_197b[0] = G_475GAT_197[0] ;
G_475GAT_197b[1] = G_475GAT_197[1] ;
temp = G_475GAT_197b[0] ;
G_475GAT_197b[0] = ~G_475GAT_197b[1] ;
G_475GAT_197b[1] = ~temp ;
G_502GAT_234[0] = G_466GAT_201[0] ;
G_502GAT_234[1] = G_466GAT_201[1] ;
G_502GAT_234[0] &= G_91GAT_23[0] ;
G_502GAT_234[1] &= G_91GAT_23[1] ;
G_504GAT_233[0] = G_466GAT_201[0] ;
G_504GAT_233[1] = G_466GAT_201[1] ;
G_504GAT_233[0] &= G_96GAT_24[0] ;
G_504GAT_233[1] &= G_96GAT_24[1] ;
G_506GAT_232[0] = G_466GAT_201[0] ;
G_506GAT_232[1] = G_466GAT_201[1] ;
G_506GAT_232[0] &= G_101GAT_25[0] ;
G_506GAT_232[1] &= G_101GAT_25[1] ;
G_508GAT_231[0] = G_466GAT_201[0] ;
G_508GAT_231[1] = G_466GAT_201[1] ;
G_508GAT_231[0] &= G_106GAT_26[0] ;
G_508GAT_231[1] &= G_106GAT_26[1] ;
G_511GAT_230[0] = G_466GAT_201[0] ;
G_511GAT_230[1] = G_466GAT_201[1] ;
G_511GAT_230[0] &= G_111GAT_27[0] ;
G_511GAT_230[1] &= G_111GAT_27[1] ;
G_513GAT_229[0] = G_466GAT_201[0] ;
G_513GAT_229[1] = G_466GAT_201[1] ;
G_513GAT_229[0] &= G_116GAT_28[0] ;
G_513GAT_229[1] &= G_116GAT_28[1] ;
G_515GAT_228[0] = G_466GAT_201[0] ;
G_515GAT_228[1] = G_466GAT_201[1] ;
G_515GAT_228[0] &= G_121GAT_29[0] ;
G_515GAT_228[1] &= G_121GAT_29[1] ;
G_517GAT_227[0] = G_466GAT_201[0] ;
G_517GAT_227[1] = G_466GAT_201[1] ;
G_517GAT_227[0] &= G_126GAT_30[0] ;
G_517GAT_227[1] &= G_126GAT_30[1] ;
G_522GAT_216[0] = G_159GAT_40[0] ;
G_522GAT_216[1] = G_159GAT_40[1] ;
G_522GAT_216[0] &= G_451GAT_200[0] ;
G_522GAT_216[1] &= G_451GAT_200[1] ;
G_523GAT_215[0] = G_165GAT_41[0] ;
G_523GAT_215[1] = G_165GAT_41[1] ;
G_523GAT_215[0] &= G_451GAT_200[0] ;
G_523GAT_215[1] &= G_451GAT_200[1] ;
G_524GAT_214[0] = G_171GAT_42[0] ;
G_524GAT_214[1] = G_171GAT_42[1] ;
G_524GAT_214[0] &= G_451GAT_200[0] ;
G_524GAT_214[1] &= G_451GAT_200[1] ;
G_525GAT_213[0] = G_177GAT_43[0] ;
G_525GAT_213[1] = G_177GAT_43[1] ;
G_525GAT_213[0] &= G_451GAT_200[0] ;
G_525GAT_213[1] &= G_451GAT_200[1] ;
G_526GAT_212[0] = G_183GAT_44[0] ;
G_526GAT_212[1] = G_183GAT_44[1] ;
G_526GAT_212[0] &= G_451GAT_200[0] ;
G_526GAT_212[1] &= G_451GAT_200[1] ;
G_527GAT_211[0] = G_189GAT_45[0] ;
G_527GAT_211[1] = G_189GAT_45[1] ;
G_527GAT_211[0] &= G_451GAT_200[0] ;
G_527GAT_211[1] &= G_451GAT_200[1] ;
G_528GAT_210[0] = G_195GAT_46[0] ;
G_528GAT_210[1] = G_195GAT_46[1] ;
G_528GAT_210[0] &= G_451GAT_200[0] ;
G_528GAT_210[1] &= G_451GAT_200[1] ;
G_529GAT_209[0] = G_201GAT_47[0] ;
G_529GAT_209[1] = G_201GAT_47[1] ;
G_529GAT_209[0] &= G_451GAT_200[0] ;
G_529GAT_209[1] &= G_451GAT_200[1] ;
G_495GAT_192[0] = G_445GAT_169b[0] ;
G_495GAT_192[1] = G_445GAT_169b[1] ;
G_495GAT_192[0] &= G_416GAT_144b[0] ;
G_495GAT_192[1] &= G_416GAT_144b[1] ;
G_492GAT_193[0] = G_444GAT_170b[0] ;
G_492GAT_193[1] = G_444GAT_170b[1] ;
G_492GAT_193[0] &= G_413GAT_147b[0] ;
G_492GAT_193[1] &= G_413GAT_147b[1] ;
G_463GAT_198[0] = G_426GAT_171b[0] ;
G_463GAT_198[1] = G_426GAT_171b[1] ;
G_463GAT_198[0] &= G_409GAT_150b[0] ;
G_463GAT_198[1] &= G_409GAT_150b[1] ;
G_460GAT_199[0] = G_425GAT_172b[0] ;
G_460GAT_199[1] = G_425GAT_172b[1] ;
G_460GAT_199[0] &= G_406GAT_153b[0] ;
G_460GAT_199[1] &= G_406GAT_153b[1] ;
G_503GAT_203[0] = G_476GAT_188b[0] ;
G_503GAT_203[1] = G_476GAT_188b[1] ;
G_503GAT_203[0] &= G_475GAT_197b[0] ;
G_503GAT_203[1] &= G_475GAT_197b[1] ;
G_505GAT_204[0] = G_478GAT_189b[0] ;
G_505GAT_204[1] = G_478GAT_189b[1] ;
G_505GAT_204[0] &= G_477GAT_196b[0] ;
G_505GAT_204[1] &= G_477GAT_196b[1] ;
G_507GAT_205[0] = G_480GAT_190b[0] ;
G_507GAT_205[1] = G_480GAT_190b[1] ;
G_507GAT_205[0] &= G_479GAT_195b[0] ;
G_507GAT_205[1] &= G_479GAT_195b[1] ;
G_509GAT_206[0] = G_482GAT_191b[0] ;
G_509GAT_206[1] = G_482GAT_191b[1] ;
G_509GAT_206[0] &= G_481GAT_194b[0] ;
G_509GAT_206[1] &= G_481GAT_194b[1] ;
G_516GAT_217b[0] = G_516GAT_217[0] ;
G_516GAT_217b[1] = G_516GAT_217[1] ;
temp = G_516GAT_217b[0] ;
G_516GAT_217b[0] = ~G_516GAT_217b[1] ;
G_516GAT_217b[1] = ~temp ;
G_514GAT_218b[0] = G_514GAT_218[0] ;
G_514GAT_218b[1] = G_514GAT_218[1] ;
temp = G_514GAT_218b[0] ;
G_514GAT_218b[0] = ~G_514GAT_218b[1] ;
G_514GAT_218b[1] = ~temp ;
G_512GAT_219b[0] = G_512GAT_219[0] ;
G_512GAT_219b[1] = G_512GAT_219[1] ;
temp = G_512GAT_219b[0] ;
G_512GAT_219b[0] = ~G_512GAT_219b[1] ;
G_512GAT_219b[1] = ~temp ;
G_510GAT_220b[0] = G_510GAT_220[0] ;
G_510GAT_220b[1] = G_510GAT_220[1] ;
temp = G_510GAT_220b[0] ;
G_510GAT_220b[0] = ~G_510GAT_220b[1] ;
G_510GAT_220b[1] = ~temp ;
G_518GAT_224[0] = G_492GAT_193[0] ;
G_518GAT_224[1] = G_492GAT_193[1] ;
G_518GAT_224[0] &= G_130GAT_31[0] ;
G_518GAT_224[1] &= G_130GAT_31[1] ;
G_498GAT_226[0] = G_460GAT_199[0] ;
G_498GAT_226[1] = G_460GAT_199[1] ;
G_498GAT_226[0] &= G_130GAT_31[0] ;
G_498GAT_226[1] &= G_130GAT_31[1] ;
G_500GAT_222[0] = G_135GAT_32[0] ;
G_500GAT_222[1] = G_135GAT_32[1] ;
G_500GAT_222[0] &= G_463GAT_198[0] ;
G_500GAT_222[1] &= G_463GAT_198[1] ;
G_520GAT_208[0] = G_207GAT_48[0] ;
G_520GAT_208[1] = G_207GAT_48[1] ;
G_520GAT_208[0] &= G_495GAT_192[0] ;
G_520GAT_208[1] &= G_495GAT_192[1] ;
G_495GAT_192b[0] = G_495GAT_192[0] ;
G_495GAT_192b[1] = G_495GAT_192[1] ;
temp = G_495GAT_192b[0] ;
G_495GAT_192b[0] = ~G_495GAT_192b[1] ;
G_495GAT_192b[1] = ~temp ;
G_492GAT_193b[0] = G_492GAT_193[0] ;
G_492GAT_193b[1] = G_492GAT_193[1] ;
temp = G_492GAT_193b[0] ;
G_492GAT_193b[0] = ~G_492GAT_193b[1] ;
G_492GAT_193b[1] = ~temp ;
G_463GAT_198b[0] = G_463GAT_198[0] ;
G_463GAT_198b[1] = G_463GAT_198[1] ;
temp = G_463GAT_198b[0] ;
G_463GAT_198b[0] = ~G_463GAT_198b[1] ;
G_463GAT_198b[1] = ~temp ;
G_460GAT_199b[0] = G_460GAT_199[0] ;
G_460GAT_199b[1] = G_460GAT_199[1] ;
temp = G_460GAT_199b[0] ;
G_460GAT_199b[0] = ~G_460GAT_199b[1] ;
G_460GAT_199b[1] = ~temp ;
G_526GAT_212b[0] = G_526GAT_212[0] ;
G_526GAT_212b[1] = G_526GAT_212[1] ;
temp = G_526GAT_212b[0] ;
G_526GAT_212b[0] = ~G_526GAT_212b[1] ;
G_526GAT_212b[1] = ~temp ;
G_525GAT_213b[0] = G_525GAT_213[0] ;
G_525GAT_213b[1] = G_525GAT_213[1] ;
temp = G_525GAT_213b[0] ;
G_525GAT_213b[0] = ~G_525GAT_213b[1] ;
G_525GAT_213b[1] = ~temp ;
G_524GAT_214b[0] = G_524GAT_214[0] ;
G_524GAT_214b[1] = G_524GAT_214[1] ;
temp = G_524GAT_214b[0] ;
G_524GAT_214b[0] = ~G_524GAT_214b[1] ;
G_524GAT_214b[1] = ~temp ;
G_523GAT_215b[0] = G_523GAT_215[0] ;
G_523GAT_215b[1] = G_523GAT_215[1] ;
temp = G_523GAT_215b[0] ;
G_523GAT_215b[0] = ~G_523GAT_215b[1] ;
G_523GAT_215b[1] = ~temp ;
G_522GAT_216b[0] = G_522GAT_216[0] ;
G_522GAT_216b[1] = G_522GAT_216[1] ;
temp = G_522GAT_216b[0] ;
G_522GAT_216b[0] = ~G_522GAT_216b[1] ;
G_522GAT_216b[1] = ~temp ;
G_517GAT_227b[0] = G_517GAT_227[0] ;
G_517GAT_227b[1] = G_517GAT_227[1] ;
temp = G_517GAT_227b[0] ;
G_517GAT_227b[0] = ~G_517GAT_227b[1] ;
G_517GAT_227b[1] = ~temp ;
G_515GAT_228b[0] = G_515GAT_228[0] ;
G_515GAT_228b[1] = G_515GAT_228[1] ;
temp = G_515GAT_228b[0] ;
G_515GAT_228b[0] = ~G_515GAT_228b[1] ;
G_515GAT_228b[1] = ~temp ;
G_513GAT_229b[0] = G_513GAT_229[0] ;
G_513GAT_229b[1] = G_513GAT_229[1] ;
temp = G_513GAT_229b[0] ;
G_513GAT_229b[0] = ~G_513GAT_229b[1] ;
G_513GAT_229b[1] = ~temp ;
G_511GAT_230b[0] = G_511GAT_230[0] ;
G_511GAT_230b[1] = G_511GAT_230[1] ;
temp = G_511GAT_230b[0] ;
G_511GAT_230b[0] = ~G_511GAT_230b[1] ;
G_511GAT_230b[1] = ~temp ;
G_508GAT_231b[0] = G_508GAT_231[0] ;
G_508GAT_231b[1] = G_508GAT_231[1] ;
temp = G_508GAT_231b[0] ;
G_508GAT_231b[0] = ~G_508GAT_231b[1] ;
G_508GAT_231b[1] = ~temp ;
G_506GAT_232b[0] = G_506GAT_232[0] ;
G_506GAT_232b[1] = G_506GAT_232[1] ;
temp = G_506GAT_232b[0] ;
G_506GAT_232b[0] = ~G_506GAT_232b[1] ;
G_506GAT_232b[1] = ~temp ;
G_504GAT_233b[0] = G_504GAT_233[0] ;
G_504GAT_233b[1] = G_504GAT_233[1] ;
temp = G_504GAT_233b[0] ;
G_504GAT_233b[0] = ~G_504GAT_233b[1] ;
G_504GAT_233b[1] = ~temp ;
G_502GAT_234b[0] = G_502GAT_234[0] ;
G_502GAT_234b[1] = G_502GAT_234[1] ;
temp = G_502GAT_234b[0] ;
G_502GAT_234b[0] = ~G_502GAT_234b[1] ;
G_502GAT_234b[1] = ~temp ;
G_521GAT_207[0] = G_207GAT_48b[0] ;
G_521GAT_207[1] = G_207GAT_48b[1] ;
G_521GAT_207[0] &= G_495GAT_192b[0] ;
G_521GAT_207[1] &= G_495GAT_192b[1] ;
G_501GAT_221[0] = G_135GAT_32b[0] ;
G_501GAT_221[1] = G_135GAT_32b[1] ;
G_501GAT_221[0] &= G_463GAT_198b[0] ;
G_501GAT_221[1] &= G_463GAT_198b[1] ;
G_519GAT_223[0] = G_492GAT_193b[0] ;
G_519GAT_223[1] = G_492GAT_193b[1] ;
G_519GAT_223[0] &= G_130GAT_31b[0] ;
G_519GAT_223[1] &= G_130GAT_31b[1] ;
G_499GAT_225[0] = G_460GAT_199b[0] ;
G_499GAT_225[1] = G_460GAT_199b[1] ;
G_499GAT_225[0] &= G_130GAT_31b[0] ;
G_499GAT_225[1] &= G_130GAT_31b[1] ;
G_543GAT_236[0] = G_517GAT_227b[0] ;
G_543GAT_236[1] = G_517GAT_227b[1] ;
G_543GAT_236[0] &= G_516GAT_217b[0] ;
G_543GAT_236[1] &= G_516GAT_217b[1] ;
G_542GAT_237[0] = G_515GAT_228b[0] ;
G_542GAT_237[1] = G_515GAT_228b[1] ;
G_542GAT_237[0] &= G_514GAT_218b[0] ;
G_542GAT_237[1] &= G_514GAT_218b[1] ;
G_541GAT_238[0] = G_513GAT_229b[0] ;
G_541GAT_238[1] = G_513GAT_229b[1] ;
G_541GAT_238[0] &= G_512GAT_219b[0] ;
G_541GAT_238[1] &= G_512GAT_219b[1] ;
G_540GAT_239[0] = G_511GAT_230b[0] ;
G_540GAT_239[1] = G_511GAT_230b[1] ;
G_540GAT_239[0] &= G_510GAT_220b[0] ;
G_540GAT_239[1] &= G_510GAT_220b[1] ;
G_539GAT_240[0] = G_508GAT_231b[0] ;
G_539GAT_240[1] = G_508GAT_231b[1] ;
G_539GAT_240[0] &= G_318GAT_72b[0] ;
G_539GAT_240[1] &= G_318GAT_72b[1] ;
G_537GAT_244[0] = G_504GAT_233b[0] ;
G_537GAT_244[1] = G_504GAT_233b[1] ;
G_537GAT_244[0] &= G_316GAT_93b[0] ;
G_537GAT_244[1] &= G_316GAT_93b[1] ;
G_538GAT_245[0] = G_506GAT_232b[0] ;
G_538GAT_245[1] = G_506GAT_232b[1] ;
G_538GAT_245[0] &= G_317GAT_106b[0] ;
G_538GAT_245[1] &= G_317GAT_106b[1] ;
G_536GAT_246[0] = G_502GAT_234b[0] ;
G_536GAT_246[1] = G_502GAT_234b[1] ;
G_536GAT_246[0] &= G_309GAT_107b[0] ;
G_536GAT_246[1] &= G_309GAT_107b[1] ;
G_569GAT_247[0] = G_540GAT_239[0] ;
G_569GAT_247[1] = G_540GAT_239[1] ;
G_569GAT_247[0] &= G_488GAT_184[0] ;
G_569GAT_247[1] &= G_488GAT_184[1] ;
G_573GAT_248[0] = G_541GAT_238[0] ;
G_573GAT_248[1] = G_541GAT_238[1] ;
G_573GAT_248[0] &= G_489GAT_185[0] ;
G_573GAT_248[1] &= G_489GAT_185[1] ;
G_577GAT_249[0] = G_542GAT_237[0] ;
G_577GAT_249[1] = G_542GAT_237[1] ;
G_577GAT_249[0] &= G_490GAT_186[0] ;
G_577GAT_249[1] &= G_490GAT_186[1] ;
G_581GAT_250[0] = G_543GAT_236[0] ;
G_581GAT_250[1] = G_543GAT_236[1] ;
G_581GAT_250[0] &= G_491GAT_187[0] ;
G_581GAT_250[1] &= G_491GAT_187[1] ;
G_553GAT_251[0] = G_503GAT_203[0] ;
G_553GAT_251[1] = G_503GAT_203[1] ;
G_553GAT_251[0] &= G_536GAT_246[0] ;
G_553GAT_251[1] &= G_536GAT_246[1] ;
G_557GAT_252[0] = G_505GAT_204[0] ;
G_557GAT_252[1] = G_505GAT_204[1] ;
G_557GAT_252[0] &= G_537GAT_244[0] ;
G_557GAT_252[1] &= G_537GAT_244[1] ;
G_561GAT_253[0] = G_507GAT_205[0] ;
G_561GAT_253[1] = G_507GAT_205[1] ;
G_561GAT_253[0] &= G_538GAT_245[0] ;
G_561GAT_253[1] &= G_538GAT_245[1] ;
G_565GAT_254[0] = G_509GAT_206[0] ;
G_565GAT_254[1] = G_509GAT_206[1] ;
G_565GAT_254[0] &= G_539GAT_240[0] ;
G_565GAT_254[1] &= G_539GAT_240[1] ;
G_547GAT_235[0] = G_521GAT_207[0] ;
G_547GAT_235[1] = G_521GAT_207[1] ;
G_547GAT_235[0] &= G_520GAT_208[0] ;
G_547GAT_235[1] &= G_520GAT_208[1] ;
G_533GAT_241[0] = G_501GAT_221[0] ;
G_533GAT_241[1] = G_501GAT_221[1] ;
G_533GAT_241[0] &= G_500GAT_222[0] ;
G_533GAT_241[1] &= G_500GAT_222[1] ;
G_544GAT_242[0] = G_519GAT_223[0] ;
G_544GAT_242[1] = G_519GAT_223[1] ;
G_544GAT_242[0] &= G_518GAT_224[0] ;
G_544GAT_242[1] &= G_518GAT_224[1] ;
G_530GAT_243[0] = G_499GAT_225[0] ;
G_530GAT_243[1] = G_499GAT_225[1] ;
G_530GAT_243[0] &= G_498GAT_226[0] ;
G_530GAT_243[1] &= G_498GAT_226[1] ;
G_590GAT_285[0] = G_159GAT_40[0] ;
G_590GAT_285[1] = G_159GAT_40[1] ;
G_590GAT_285[0] &= G_553GAT_251[0] ;
G_590GAT_285[1] &= G_553GAT_251[1] ;
G_597GAT_283[0] = G_165GAT_41[0] ;
G_597GAT_283[1] = G_165GAT_41[1] ;
G_597GAT_283[0] &= G_557GAT_252[0] ;
G_597GAT_283[1] &= G_557GAT_252[1] ;
G_606GAT_281[0] = G_171GAT_42[0] ;
G_606GAT_281[1] = G_171GAT_42[1] ;
G_606GAT_281[0] &= G_561GAT_253[0] ;
G_606GAT_281[1] &= G_561GAT_253[1] ;
G_616GAT_279[0] = G_177GAT_43[0] ;
G_616GAT_279[1] = G_177GAT_43[1] ;
G_616GAT_279[0] &= G_565GAT_254[0] ;
G_616GAT_279[1] &= G_565GAT_254[1] ;
G_625GAT_277[0] = G_183GAT_44[0] ;
G_625GAT_277[1] = G_183GAT_44[1] ;
G_625GAT_277[0] &= G_569GAT_247[0] ;
G_625GAT_277[1] &= G_569GAT_247[1] ;
G_632GAT_275[0] = G_189GAT_45[0] ;
G_632GAT_275[1] = G_189GAT_45[1] ;
G_632GAT_275[0] &= G_573GAT_248[0] ;
G_632GAT_275[1] &= G_573GAT_248[1] ;
G_641GAT_273[0] = G_195GAT_46[0] ;
G_641GAT_273[1] = G_195GAT_46[1] ;
G_641GAT_273[0] &= G_577GAT_249[0] ;
G_641GAT_273[1] &= G_577GAT_249[1] ;
G_651GAT_271[0] = G_201GAT_47[0] ;
G_651GAT_271[1] = G_201GAT_47[1] ;
G_651GAT_271[0] &= G_581GAT_250[0] ;
G_651GAT_271[1] &= G_581GAT_250[1] ;
G_659GAT_261[0] = G_581GAT_250[0] ;
G_659GAT_261[1] = G_581GAT_250[1] ;
G_659GAT_261[0] &= G_246GAT_53[0] ;
G_659GAT_261[1] &= G_246GAT_53[1] ;
G_650GAT_262[0] = G_577GAT_249[0] ;
G_650GAT_262[1] = G_577GAT_249[1] ;
G_650GAT_262[0] &= G_246GAT_53[0] ;
G_650GAT_262[1] &= G_246GAT_53[1] ;
G_640GAT_263[0] = G_573GAT_248[0] ;
G_640GAT_263[1] = G_573GAT_248[1] ;
G_640GAT_263[0] &= G_246GAT_53[0] ;
G_640GAT_263[1] &= G_246GAT_53[1] ;
G_631GAT_264[0] = G_569GAT_247[0] ;
G_631GAT_264[1] = G_569GAT_247[1] ;
G_631GAT_264[0] &= G_246GAT_53[0] ;
G_631GAT_264[1] &= G_246GAT_53[1] ;
G_624GAT_265[0] = G_565GAT_254[0] ;
G_624GAT_265[1] = G_565GAT_254[1] ;
G_624GAT_265[0] &= G_246GAT_53[0] ;
G_624GAT_265[1] &= G_246GAT_53[1] ;
G_615GAT_266[0] = G_561GAT_253[0] ;
G_615GAT_266[1] = G_561GAT_253[1] ;
G_615GAT_266[0] &= G_246GAT_53[0] ;
G_615GAT_266[1] &= G_246GAT_53[1] ;
G_605GAT_267[0] = G_557GAT_252[0] ;
G_605GAT_267[1] = G_557GAT_252[1] ;
G_605GAT_267[0] &= G_246GAT_53[0] ;
G_605GAT_267[1] &= G_246GAT_53[1] ;
G_596GAT_268[0] = G_553GAT_251[0] ;
G_596GAT_268[1] = G_553GAT_251[1] ;
G_596GAT_268[0] &= G_246GAT_53[0] ;
G_596GAT_268[1] &= G_246GAT_53[1] ;
G_587GAT_256[0] = G_547GAT_235[0] ;
G_587GAT_256[1] = G_547GAT_235[1] ;
G_587GAT_256[0] &= G_544GAT_242[0] ;
G_587GAT_256[1] &= G_544GAT_242[1] ;
G_552GAT_258[0] = G_533GAT_241[0] ;
G_552GAT_258[1] = G_533GAT_241[1] ;
G_552GAT_258[0] &= G_530GAT_243[0] ;
G_552GAT_258[1] &= G_530GAT_243[1] ;
G_569GAT_247b[0] = G_569GAT_247[0] ;
G_569GAT_247b[1] = G_569GAT_247[1] ;
temp = G_569GAT_247b[0] ;
G_569GAT_247b[0] = ~G_569GAT_247b[1] ;
G_569GAT_247b[1] = ~temp ;
G_573GAT_248b[0] = G_573GAT_248[0] ;
G_573GAT_248b[1] = G_573GAT_248[1] ;
temp = G_573GAT_248b[0] ;
G_573GAT_248b[0] = ~G_573GAT_248b[1] ;
G_573GAT_248b[1] = ~temp ;
G_577GAT_249b[0] = G_577GAT_249[0] ;
G_577GAT_249b[1] = G_577GAT_249[1] ;
temp = G_577GAT_249b[0] ;
G_577GAT_249b[0] = ~G_577GAT_249b[1] ;
G_577GAT_249b[1] = ~temp ;
G_581GAT_250b[0] = G_581GAT_250[0] ;
G_581GAT_250b[1] = G_581GAT_250[1] ;
temp = G_581GAT_250b[0] ;
G_581GAT_250b[0] = ~G_581GAT_250b[1] ;
G_581GAT_250b[1] = ~temp ;
G_553GAT_251b[0] = G_553GAT_251[0] ;
G_553GAT_251b[1] = G_553GAT_251[1] ;
temp = G_553GAT_251b[0] ;
G_553GAT_251b[0] = ~G_553GAT_251b[1] ;
G_553GAT_251b[1] = ~temp ;
G_557GAT_252b[0] = G_557GAT_252[0] ;
G_557GAT_252b[1] = G_557GAT_252[1] ;
temp = G_557GAT_252b[0] ;
G_557GAT_252b[0] = ~G_557GAT_252b[1] ;
G_557GAT_252b[1] = ~temp ;
G_561GAT_253b[0] = G_561GAT_253[0] ;
G_561GAT_253b[1] = G_561GAT_253[1] ;
temp = G_561GAT_253b[0] ;
G_561GAT_253b[0] = ~G_561GAT_253b[1] ;
G_561GAT_253b[1] = ~temp ;
G_565GAT_254b[0] = G_565GAT_254[0] ;
G_565GAT_254b[1] = G_565GAT_254[1] ;
temp = G_565GAT_254b[0] ;
G_565GAT_254b[0] = ~G_565GAT_254b[1] ;
G_565GAT_254b[1] = ~temp ;
G_654GAT_270[0] = G_201GAT_47b[0] ;
G_654GAT_270[1] = G_201GAT_47b[1] ;
G_654GAT_270[0] &= G_581GAT_250b[0] ;
G_654GAT_270[1] &= G_581GAT_250b[1] ;
G_644GAT_272[0] = G_195GAT_46b[0] ;
G_644GAT_272[1] = G_195GAT_46b[1] ;
G_644GAT_272[0] &= G_577GAT_249b[0] ;
G_644GAT_272[1] &= G_577GAT_249b[1] ;
G_635GAT_274[0] = G_189GAT_45b[0] ;
G_635GAT_274[1] = G_189GAT_45b[1] ;
G_635GAT_274[0] &= G_573GAT_248b[0] ;
G_635GAT_274[1] &= G_573GAT_248b[1] ;
G_628GAT_276[0] = G_183GAT_44b[0] ;
G_628GAT_276[1] = G_183GAT_44b[1] ;
G_628GAT_276[0] &= G_569GAT_247b[0] ;
G_628GAT_276[1] &= G_569GAT_247b[1] ;
G_619GAT_278[0] = G_177GAT_43b[0] ;
G_619GAT_278[1] = G_177GAT_43b[1] ;
G_619GAT_278[0] &= G_565GAT_254b[0] ;
G_619GAT_278[1] &= G_565GAT_254b[1] ;
G_609GAT_280[0] = G_171GAT_42b[0] ;
G_609GAT_280[1] = G_171GAT_42b[1] ;
G_609GAT_280[0] &= G_561GAT_253b[0] ;
G_609GAT_280[1] &= G_561GAT_253b[1] ;
G_600GAT_282[0] = G_165GAT_41b[0] ;
G_600GAT_282[1] = G_165GAT_41b[1] ;
G_600GAT_282[0] &= G_557GAT_252b[0] ;
G_600GAT_282[1] &= G_557GAT_252b[1] ;
G_593GAT_284[0] = G_159GAT_40b[0] ;
G_593GAT_284[1] = G_159GAT_40b[1] ;
G_593GAT_284[0] &= G_553GAT_251b[0] ;
G_593GAT_284[1] &= G_553GAT_251b[1] ;
G_589GAT_269[0] = G_586GAT_255[0] ;
G_589GAT_269[1] = G_586GAT_255[1] ;
G_589GAT_269[0] &= G_585GAT_259[0] ;
G_589GAT_269[1] &= G_585GAT_259[1] ;
G_587GAT_256b[0] = G_587GAT_256[0] ;
G_587GAT_256b[1] = G_587GAT_256[1] ;
temp = G_587GAT_256b[0] ;
G_587GAT_256b[0] = ~G_587GAT_256b[1] ;
G_587GAT_256b[1] = ~temp ;
G_588GAT_286[0] = G_551GAT_257[0] ;
G_588GAT_286[1] = G_551GAT_257[1] ;
G_588GAT_286[0] &= G_550GAT_260[0] ;
G_588GAT_286[1] &= G_550GAT_260[1] ;
G_552GAT_258b[0] = G_552GAT_258[0] ;
G_552GAT_258b[1] = G_552GAT_258[1] ;
temp = G_552GAT_258b[0] ;
G_552GAT_258b[0] = ~G_552GAT_258b[1] ;
G_552GAT_258b[1] = ~temp ;
G_659GAT_261b[0] = G_659GAT_261[0] ;
G_659GAT_261b[1] = G_659GAT_261[1] ;
temp = G_659GAT_261b[0] ;
G_659GAT_261b[0] = ~G_659GAT_261b[1] ;
G_659GAT_261b[1] = ~temp ;
G_650GAT_262b[0] = G_650GAT_262[0] ;
G_650GAT_262b[1] = G_650GAT_262[1] ;
temp = G_650GAT_262b[0] ;
G_650GAT_262b[0] = ~G_650GAT_262b[1] ;
G_650GAT_262b[1] = ~temp ;
G_640GAT_263b[0] = G_640GAT_263[0] ;
G_640GAT_263b[1] = G_640GAT_263[1] ;
temp = G_640GAT_263b[0] ;
G_640GAT_263b[0] = ~G_640GAT_263b[1] ;
G_640GAT_263b[1] = ~temp ;
G_631GAT_264b[0] = G_631GAT_264[0] ;
G_631GAT_264b[1] = G_631GAT_264[1] ;
temp = G_631GAT_264b[0] ;
G_631GAT_264b[0] = ~G_631GAT_264b[1] ;
G_631GAT_264b[1] = ~temp ;
G_624GAT_265b[0] = G_624GAT_265[0] ;
G_624GAT_265b[1] = G_624GAT_265[1] ;
temp = G_624GAT_265b[0] ;
G_624GAT_265b[0] = ~G_624GAT_265b[1] ;
G_624GAT_265b[1] = ~temp ;
G_615GAT_266b[0] = G_615GAT_266[0] ;
G_615GAT_266b[1] = G_615GAT_266[1] ;
temp = G_615GAT_266b[0] ;
G_615GAT_266b[0] = ~G_615GAT_266b[1] ;
G_615GAT_266b[1] = ~temp ;
G_605GAT_267b[0] = G_605GAT_267[0] ;
G_605GAT_267b[1] = G_605GAT_267[1] ;
temp = G_605GAT_267b[0] ;
G_605GAT_267b[0] = ~G_605GAT_267b[1] ;
G_605GAT_267b[1] = ~temp ;
G_596GAT_268b[0] = G_596GAT_268[0] ;
G_596GAT_268b[1] = G_596GAT_268[1] ;
temp = G_596GAT_268b[0] ;
G_596GAT_268b[0] = ~G_596GAT_268b[1] ;
G_596GAT_268b[1] = ~temp ;
G_760GAT_318[0] = G_722GAT_295[0] ;
G_760GAT_318[1] = G_722GAT_295[1] ;
G_760GAT_318[0] &= G_237GAT_52[0] ;
G_760GAT_318[1] &= G_237GAT_52[1] ;
G_755GAT_319[0] = G_713GAT_297[0] ;
G_755GAT_319[1] = G_713GAT_297[1] ;
G_755GAT_319[0] &= G_237GAT_52[0] ;
G_755GAT_319[1] &= G_237GAT_52[1] ;
G_752GAT_320[0] = G_705GAT_299[0] ;
G_752GAT_320[1] = G_705GAT_299[1] ;
G_752GAT_320[0] &= G_237GAT_52[0] ;
G_752GAT_320[1] &= G_237GAT_52[1] ;
G_749GAT_321[0] = G_697GAT_301[0] ;
G_749GAT_321[1] = G_697GAT_301[1] ;
G_749GAT_321[0] &= G_237GAT_52[0] ;
G_749GAT_321[1] &= G_237GAT_52[1] ;
G_746GAT_322[0] = G_687GAT_304[0] ;
G_746GAT_322[1] = G_687GAT_304[1] ;
G_746GAT_322[0] &= G_237GAT_52[0] ;
G_746GAT_322[1] &= G_237GAT_52[1] ;
G_743GAT_323[0] = G_678GAT_307[0] ;
G_743GAT_323[1] = G_678GAT_307[1] ;
G_743GAT_323[0] &= G_237GAT_52[0] ;
G_743GAT_323[1] &= G_237GAT_52[1] ;
G_740GAT_324[0] = G_670GAT_310[0] ;
G_740GAT_324[1] = G_670GAT_310[1] ;
G_740GAT_324[0] &= G_237GAT_52[0] ;
G_740GAT_324[1] &= G_237GAT_52[1] ;
G_737GAT_325[0] = G_662GAT_313[0] ;
G_737GAT_325[1] = G_662GAT_313[1] ;
G_737GAT_325[0] &= G_237GAT_52[0] ;
G_737GAT_325[1] &= G_237GAT_52[1] ;
G_734GAT_287[0] = G_261GAT_57[0] ;
G_734GAT_287[1] = G_261GAT_57[1] ;
G_734GAT_287[0] &= G_654GAT_270[0] ;
G_734GAT_287[1] &= G_654GAT_270[1] ;
G_734GAT_287[0] &= G_644GAT_272[0] ;
G_734GAT_287[1] &= G_644GAT_272[1] ;
G_734GAT_287[0] &= G_635GAT_274[0] ;
G_734GAT_287[1] &= G_635GAT_274[1] ;
G_733GAT_288[0] = G_261GAT_57[0] ;
G_733GAT_288[1] = G_261GAT_57[1] ;
G_733GAT_288[0] &= G_654GAT_270[0] ;
G_733GAT_288[1] &= G_654GAT_270[1] ;
G_733GAT_288[0] &= G_644GAT_272[0] ;
G_733GAT_288[1] &= G_644GAT_272[1] ;
G_732GAT_289[0] = G_261GAT_57[0] ;
G_732GAT_289[1] = G_261GAT_57[1] ;
G_732GAT_289[0] &= G_654GAT_270[0] ;
G_732GAT_289[1] &= G_654GAT_270[1] ;
G_589GAT_269b[0] = G_589GAT_269[0] ;
G_589GAT_269b[1] = G_589GAT_269[1] ;
temp = G_589GAT_269b[0] ;
G_589GAT_269b[0] = ~G_589GAT_269b[1] ;
G_589GAT_269b[1] = ~temp ;
G_727GAT_294[0] = G_651GAT_271[0] ;
G_727GAT_294[1] = G_651GAT_271[1] ;
G_727GAT_294[0] &= G_654GAT_270[0] ;
G_727GAT_294[1] &= G_654GAT_270[1] ;
G_717GAT_296[0] = G_641GAT_273[0] ;
G_717GAT_296[1] = G_641GAT_273[1] ;
G_717GAT_296[0] &= G_644GAT_272[0] ;
G_717GAT_296[1] &= G_644GAT_272[1] ;
G_761GAT_336[0] = G_722GAT_295[0] ;
G_761GAT_336[1] = G_722GAT_295[1] ;
G_761GAT_336[0] &= G_644GAT_272[0] ;
G_761GAT_336[1] &= G_644GAT_272[1] ;
G_763GAT_337[0] = G_722GAT_295[0] ;
G_763GAT_337[1] = G_722GAT_295[1] ;
G_763GAT_337[0] &= G_644GAT_272[0] ;
G_763GAT_337[1] &= G_644GAT_272[1] ;
G_763GAT_337[0] &= G_635GAT_274[0] ;
G_763GAT_337[1] &= G_635GAT_274[1] ;
G_708GAT_298[0] = G_632GAT_275[0] ;
G_708GAT_298[1] = G_632GAT_275[1] ;
G_708GAT_298[0] &= G_635GAT_274[0] ;
G_708GAT_298[1] &= G_635GAT_274[1] ;
G_762GAT_339[0] = G_713GAT_297[0] ;
G_762GAT_339[1] = G_713GAT_297[1] ;
G_762GAT_339[0] &= G_635GAT_274[0] ;
G_762GAT_339[1] &= G_635GAT_274[1] ;
G_700GAT_300[0] = G_625GAT_277[0] ;
G_700GAT_300[1] = G_625GAT_277[1] ;
G_700GAT_300[0] &= G_628GAT_276[0] ;
G_700GAT_300[1] &= G_628GAT_276[1] ;
G_692GAT_303[0] = G_616GAT_279[0] ;
G_692GAT_303[1] = G_616GAT_279[1] ;
G_692GAT_303[0] &= G_619GAT_278[0] ;
G_692GAT_303[1] &= G_619GAT_278[1] ;
G_682GAT_306[0] = G_606GAT_281[0] ;
G_682GAT_306[1] = G_606GAT_281[1] ;
G_682GAT_306[0] &= G_609GAT_280[0] ;
G_682GAT_306[1] &= G_609GAT_280[1] ;
G_764GAT_343[0] = G_687GAT_304[0] ;
G_764GAT_343[1] = G_687GAT_304[1] ;
G_764GAT_343[0] &= G_609GAT_280[0] ;
G_764GAT_343[1] &= G_609GAT_280[1] ;
G_766GAT_344[0] = G_687GAT_304[0] ;
G_766GAT_344[1] = G_687GAT_304[1] ;
G_766GAT_344[0] &= G_609GAT_280[0] ;
G_766GAT_344[1] &= G_609GAT_280[1] ;
G_766GAT_344[0] &= G_600GAT_282[0] ;
G_766GAT_344[1] &= G_600GAT_282[1] ;
G_673GAT_309[0] = G_597GAT_283[0] ;
G_673GAT_309[1] = G_597GAT_283[1] ;
G_673GAT_309[0] &= G_600GAT_282[0] ;
G_673GAT_309[1] &= G_600GAT_282[1] ;
G_765GAT_346[0] = G_678GAT_307[0] ;
G_765GAT_346[1] = G_678GAT_307[1] ;
G_765GAT_346[0] &= G_600GAT_282[0] ;
G_765GAT_346[1] &= G_600GAT_282[1] ;
G_665GAT_312[0] = G_590GAT_285[0] ;
G_665GAT_312[1] = G_590GAT_285[1] ;
G_665GAT_312[0] &= G_593GAT_284[0] ;
G_665GAT_312[1] &= G_593GAT_284[1] ;
G_588GAT_286b[0] = G_588GAT_286[0] ;
G_588GAT_286b[1] = G_588GAT_286[1] ;
temp = G_588GAT_286b[0] ;
G_588GAT_286b[0] = ~G_588GAT_286b[1] ;
G_588GAT_286b[1] = ~temp ;
G_731GAT_290[0] = G_659GAT_261b[0] ;
G_731GAT_290[1] = G_659GAT_261b[1] ;
G_731GAT_290[0] &= G_341GAT_61b[0] ;
G_731GAT_290[1] &= G_341GAT_61b[1] ;
G_721GAT_291[0] = G_650GAT_262b[0] ;
G_721GAT_291[1] = G_650GAT_262b[1] ;
G_721GAT_291[0] &= G_339GAT_62b[0] ;
G_721GAT_291[1] &= G_339GAT_62b[1] ;
G_712GAT_292[0] = G_640GAT_263b[0] ;
G_712GAT_292[1] = G_640GAT_263b[1] ;
G_712GAT_292[0] &= G_337GAT_63b[0] ;
G_712GAT_292[1] &= G_337GAT_63b[1] ;
G_704GAT_302[0] = G_526GAT_212b[0] ;
G_704GAT_302[1] = G_526GAT_212b[1] ;
G_704GAT_302[0] &= G_631GAT_264b[0] ;
G_704GAT_302[1] &= G_631GAT_264b[1] ;
G_696GAT_305[0] = G_525GAT_213b[0] ;
G_696GAT_305[1] = G_525GAT_213b[1] ;
G_696GAT_305[0] &= G_624GAT_265b[0] ;
G_696GAT_305[1] &= G_624GAT_265b[1] ;
G_686GAT_308[0] = G_524GAT_214b[0] ;
G_686GAT_308[1] = G_524GAT_214b[1] ;
G_686GAT_308[0] &= G_615GAT_266b[0] ;
G_686GAT_308[1] &= G_615GAT_266b[1] ;
G_677GAT_311[0] = G_523GAT_215b[0] ;
G_677GAT_311[1] = G_523GAT_215b[1] ;
G_677GAT_311[0] &= G_605GAT_267b[0] ;
G_677GAT_311[1] &= G_605GAT_267b[1] ;
G_669GAT_314[0] = G_522GAT_216b[0] ;
G_669GAT_314[1] = G_522GAT_216b[1] ;
G_669GAT_314[0] &= G_596GAT_268b[0] ;
G_669GAT_314[1] &= G_596GAT_268b[1] ;
G_759GAT_326[0] = G_727GAT_294[0] ;
G_759GAT_326[1] = G_727GAT_294[1] ;
G_759GAT_326[0] &= G_228GAT_51[0] ;
G_759GAT_326[1] &= G_228GAT_51[1] ;
G_754GAT_327[0] = G_717GAT_296[0] ;
G_754GAT_327[1] = G_717GAT_296[1] ;
G_754GAT_327[0] &= G_228GAT_51[0] ;
G_754GAT_327[1] &= G_228GAT_51[1] ;
G_751GAT_328[0] = G_708GAT_298[0] ;
G_751GAT_328[1] = G_708GAT_298[1] ;
G_751GAT_328[0] &= G_228GAT_51[0] ;
G_751GAT_328[1] &= G_228GAT_51[1] ;
G_748GAT_329[0] = G_700GAT_300[0] ;
G_748GAT_329[1] = G_700GAT_300[1] ;
G_748GAT_329[0] &= G_228GAT_51[0] ;
G_748GAT_329[1] &= G_228GAT_51[1] ;
G_745GAT_330[0] = G_692GAT_303[0] ;
G_745GAT_330[1] = G_692GAT_303[1] ;
G_745GAT_330[0] &= G_228GAT_51[0] ;
G_745GAT_330[1] &= G_228GAT_51[1] ;
G_742GAT_331[0] = G_682GAT_306[0] ;
G_742GAT_331[1] = G_682GAT_306[1] ;
G_742GAT_331[0] &= G_228GAT_51[0] ;
G_742GAT_331[1] &= G_228GAT_51[1] ;
G_739GAT_332[0] = G_673GAT_309[0] ;
G_739GAT_332[1] = G_673GAT_309[1] ;
G_739GAT_332[0] &= G_228GAT_51[0] ;
G_739GAT_332[1] &= G_228GAT_51[1] ;
G_736GAT_333[0] = G_665GAT_312[0] ;
G_736GAT_333[1] = G_665GAT_312[1] ;
G_736GAT_333[0] &= G_228GAT_51[0] ;
G_736GAT_333[1] &= G_228GAT_51[1] ;
G_758GAT_316[0] = G_261GAT_57[0] ;
G_758GAT_316[1] = G_261GAT_57[1] ;
G_758GAT_316[0] &= G_727GAT_294[0] ;
G_758GAT_316[1] &= G_727GAT_294[1] ;
G_773GAT_351[0] = G_734GAT_287[0] ;
G_773GAT_351[1] = G_734GAT_287[1] ;
G_773GAT_351[0] &= G_763GAT_337[0] ;
G_773GAT_351[1] &= G_763GAT_337[1] ;
G_773GAT_351[0] &= G_762GAT_339[0] ;
G_773GAT_351[1] &= G_762GAT_339[1] ;
G_773GAT_351[0] &= G_750GAT_340[0] ;
G_773GAT_351[1] &= G_750GAT_340[1] ;
G_778GAT_352[0] = G_733GAT_288[0] ;
G_778GAT_352[1] = G_733GAT_288[1] ;
G_778GAT_352[0] &= G_761GAT_336[0] ;
G_778GAT_352[1] &= G_761GAT_336[1] ;
G_778GAT_352[0] &= G_753GAT_338[0] ;
G_778GAT_352[1] &= G_753GAT_338[1] ;
G_782GAT_353[0] = G_732GAT_289[0] ;
G_782GAT_353[1] = G_732GAT_289[1] ;
G_782GAT_353[0] &= G_756GAT_335[0] ;
G_782GAT_353[1] &= G_756GAT_335[1] ;
G_661GAT_293[0] = G_589GAT_269b[0] ;
G_661GAT_293[1] = G_589GAT_269b[1] ;
G_661GAT_293[0] &= G_587GAT_256b[0] ;
G_661GAT_293[1] &= G_587GAT_256b[1] ;
G_727GAT_294b[0] = G_727GAT_294[0] ;
G_727GAT_294b[1] = G_727GAT_294[1] ;
temp = G_727GAT_294b[0] ;
G_727GAT_294b[0] = ~G_727GAT_294b[1] ;
G_727GAT_294b[1] = ~temp ;
G_717GAT_296b[0] = G_717GAT_296[0] ;
G_717GAT_296b[1] = G_717GAT_296[1] ;
temp = G_717GAT_296b[0] ;
G_717GAT_296b[0] = ~G_717GAT_296b[1] ;
G_717GAT_296b[1] = ~temp ;
G_708GAT_298b[0] = G_708GAT_298[0] ;
G_708GAT_298b[1] = G_708GAT_298[1] ;
temp = G_708GAT_298b[0] ;
G_708GAT_298b[0] = ~G_708GAT_298b[1] ;
G_708GAT_298b[1] = ~temp ;
G_700GAT_300b[0] = G_700GAT_300[0] ;
G_700GAT_300b[1] = G_700GAT_300[1] ;
temp = G_700GAT_300b[0] ;
G_700GAT_300b[0] = ~G_700GAT_300b[1] ;
G_700GAT_300b[1] = ~temp ;
G_692GAT_303b[0] = G_692GAT_303[0] ;
G_692GAT_303b[1] = G_692GAT_303[1] ;
temp = G_692GAT_303b[0] ;
G_692GAT_303b[0] = ~G_692GAT_303b[1] ;
G_692GAT_303b[1] = ~temp ;
G_682GAT_306b[0] = G_682GAT_306[0] ;
G_682GAT_306b[1] = G_682GAT_306[1] ;
temp = G_682GAT_306b[0] ;
G_682GAT_306b[0] = ~G_682GAT_306b[1] ;
G_682GAT_306b[1] = ~temp ;
G_673GAT_309b[0] = G_673GAT_309[0] ;
G_673GAT_309b[1] = G_673GAT_309[1] ;
temp = G_673GAT_309b[0] ;
G_673GAT_309b[0] = ~G_673GAT_309b[1] ;
G_673GAT_309b[1] = ~temp ;
G_665GAT_312b[0] = G_665GAT_312[0] ;
G_665GAT_312b[1] = G_665GAT_312[1] ;
temp = G_665GAT_312b[0] ;
G_665GAT_312b[0] = ~G_665GAT_312b[1] ;
G_665GAT_312b[1] = ~temp ;
G_660GAT_315[0] = G_588GAT_286b[0] ;
G_660GAT_315[1] = G_588GAT_286b[1] ;
G_660GAT_315[0] &= G_552GAT_258b[0] ;
G_660GAT_315[1] &= G_552GAT_258b[1] ;
G_760GAT_318b[0] = G_760GAT_318[0] ;
G_760GAT_318b[1] = G_760GAT_318[1] ;
temp = G_760GAT_318b[0] ;
G_760GAT_318b[0] = ~G_760GAT_318b[1] ;
G_760GAT_318b[1] = ~temp ;
G_755GAT_319b[0] = G_755GAT_319[0] ;
G_755GAT_319b[1] = G_755GAT_319[1] ;
temp = G_755GAT_319b[0] ;
G_755GAT_319b[0] = ~G_755GAT_319b[1] ;
G_755GAT_319b[1] = ~temp ;
G_752GAT_320b[0] = G_752GAT_320[0] ;
G_752GAT_320b[1] = G_752GAT_320[1] ;
temp = G_752GAT_320b[0] ;
G_752GAT_320b[0] = ~G_752GAT_320b[1] ;
G_752GAT_320b[1] = ~temp ;
G_749GAT_321b[0] = G_749GAT_321[0] ;
G_749GAT_321b[1] = G_749GAT_321[1] ;
temp = G_749GAT_321b[0] ;
G_749GAT_321b[0] = ~G_749GAT_321b[1] ;
G_749GAT_321b[1] = ~temp ;
G_746GAT_322b[0] = G_746GAT_322[0] ;
G_746GAT_322b[1] = G_746GAT_322[1] ;
temp = G_746GAT_322b[0] ;
G_746GAT_322b[0] = ~G_746GAT_322b[1] ;
G_746GAT_322b[1] = ~temp ;
G_743GAT_323b[0] = G_743GAT_323[0] ;
G_743GAT_323b[1] = G_743GAT_323[1] ;
temp = G_743GAT_323b[0] ;
G_743GAT_323b[0] = ~G_743GAT_323b[1] ;
G_743GAT_323b[1] = ~temp ;
G_740GAT_324b[0] = G_740GAT_324[0] ;
G_740GAT_324b[1] = G_740GAT_324[1] ;
temp = G_740GAT_324b[0] ;
G_740GAT_324b[0] = ~G_740GAT_324b[1] ;
G_740GAT_324b[1] = ~temp ;
G_737GAT_325b[0] = G_737GAT_325[0] ;
G_737GAT_325b[1] = G_737GAT_325[1] ;
temp = G_737GAT_325b[0] ;
G_737GAT_325b[0] = ~G_737GAT_325b[1] ;
G_737GAT_325b[1] = ~temp ;
G_795GAT_369[0] = G_773GAT_351[0] ;
G_795GAT_369[1] = G_773GAT_351[1] ;
G_795GAT_369[0] &= G_628GAT_276[0] ;
G_795GAT_369[1] &= G_628GAT_276[1] ;
G_793GAT_364[0] = G_782GAT_353[0] ;
G_793GAT_364[1] = G_782GAT_353[1] ;
G_793GAT_364[0] &= G_717GAT_296[0] ;
G_793GAT_364[1] &= G_717GAT_296[1] ;
G_791GAT_366[0] = G_778GAT_352[0] ;
G_791GAT_366[1] = G_778GAT_352[1] ;
G_791GAT_366[0] &= G_708GAT_298[0] ;
G_791GAT_366[1] &= G_708GAT_298[1] ;
G_789GAT_368[0] = G_773GAT_351[0] ;
G_789GAT_368[1] = G_773GAT_351[1] ;
G_789GAT_368[0] &= G_700GAT_300[0] ;
G_789GAT_368[1] &= G_700GAT_300[1] ;
G_758GAT_316b[0] = G_758GAT_316[0] ;
G_758GAT_316b[1] = G_758GAT_316[1] ;
temp = G_758GAT_316b[0] ;
G_758GAT_316b[0] = ~G_758GAT_316b[1] ;
G_758GAT_316b[1] = ~temp ;
G_757GAT_317[0] = G_261GAT_57b[0] ;
G_757GAT_317[1] = G_261GAT_57b[1] ;
G_757GAT_317[0] &= G_727GAT_294b[0] ;
G_757GAT_317[1] &= G_727GAT_294b[1] ;
G_759GAT_326b[0] = G_759GAT_326[0] ;
G_759GAT_326b[1] = G_759GAT_326[1] ;
temp = G_759GAT_326b[0] ;
G_759GAT_326b[0] = ~G_759GAT_326b[1] ;
G_759GAT_326b[1] = ~temp ;
G_754GAT_327b[0] = G_754GAT_327[0] ;
G_754GAT_327b[1] = G_754GAT_327[1] ;
temp = G_754GAT_327b[0] ;
G_754GAT_327b[0] = ~G_754GAT_327b[1] ;
G_754GAT_327b[1] = ~temp ;
G_751GAT_328b[0] = G_751GAT_328[0] ;
G_751GAT_328b[1] = G_751GAT_328[1] ;
temp = G_751GAT_328b[0] ;
G_751GAT_328b[0] = ~G_751GAT_328b[1] ;
G_751GAT_328b[1] = ~temp ;
G_748GAT_329b[0] = G_748GAT_329[0] ;
G_748GAT_329b[1] = G_748GAT_329[1] ;
temp = G_748GAT_329b[0] ;
G_748GAT_329b[0] = ~G_748GAT_329b[1] ;
G_748GAT_329b[1] = ~temp ;
G_745GAT_330b[0] = G_745GAT_330[0] ;
G_745GAT_330b[1] = G_745GAT_330[1] ;
temp = G_745GAT_330b[0] ;
G_745GAT_330b[0] = ~G_745GAT_330b[1] ;
G_745GAT_330b[1] = ~temp ;
G_742GAT_331b[0] = G_742GAT_331[0] ;
G_742GAT_331b[1] = G_742GAT_331[1] ;
temp = G_742GAT_331b[0] ;
G_742GAT_331b[0] = ~G_742GAT_331b[1] ;
G_742GAT_331b[1] = ~temp ;
G_739GAT_332b[0] = G_739GAT_332[0] ;
G_739GAT_332b[1] = G_739GAT_332[1] ;
temp = G_739GAT_332b[0] ;
G_739GAT_332b[0] = ~G_739GAT_332b[1] ;
G_739GAT_332b[1] = ~temp ;
G_736GAT_333b[0] = G_736GAT_333[0] ;
G_736GAT_333b[1] = G_736GAT_333[1] ;
temp = G_736GAT_333b[0] ;
G_736GAT_333b[0] = ~G_736GAT_333b[1] ;
G_736GAT_333b[1] = ~temp ;
G_773GAT_351b[0] = G_773GAT_351[0] ;
G_773GAT_351b[1] = G_773GAT_351[1] ;
temp = G_773GAT_351b[0] ;
G_773GAT_351b[0] = ~G_773GAT_351b[1] ;
G_773GAT_351b[1] = ~temp ;
G_778GAT_352b[0] = G_778GAT_352[0] ;
G_778GAT_352b[1] = G_778GAT_352[1] ;
temp = G_778GAT_352b[0] ;
G_778GAT_352b[0] = ~G_778GAT_352b[1] ;
G_778GAT_352b[1] = ~temp ;
G_782GAT_353b[0] = G_782GAT_353[0] ;
G_782GAT_353b[1] = G_782GAT_353[1] ;
temp = G_782GAT_353b[0] ;
G_782GAT_353b[0] = ~G_782GAT_353b[1] ;
G_782GAT_353b[1] = ~temp ;
G_757GAT_317b[0] = G_757GAT_317[0] ;
G_757GAT_317b[1] = G_757GAT_317[1] ;
temp = G_757GAT_317b[0] ;
G_757GAT_317b[0] = ~G_757GAT_317b[1] ;
G_757GAT_317b[1] = ~temp ;
G_796GAT_373[0] = G_747GAT_341[0] ;
G_796GAT_373[1] = G_747GAT_341[1] ;
G_796GAT_373[0] &= G_795GAT_369[0] ;
G_796GAT_373[1] &= G_795GAT_369[1] ;
G_787GAT_354[0] = G_760GAT_318b[0] ;
G_787GAT_354[1] = G_760GAT_318b[1] ;
G_787GAT_354[0] &= G_759GAT_326b[0] ;
G_787GAT_354[1] &= G_759GAT_326b[1] ;
G_785GAT_355[0] = G_755GAT_319b[0] ;
G_785GAT_355[1] = G_755GAT_319b[1] ;
G_785GAT_355[0] &= G_754GAT_327b[0] ;
G_785GAT_355[1] &= G_754GAT_327b[1] ;
G_781GAT_356[0] = G_752GAT_320b[0] ;
G_781GAT_356[1] = G_752GAT_320b[1] ;
G_781GAT_356[0] &= G_751GAT_328b[0] ;
G_781GAT_356[1] &= G_751GAT_328b[1] ;
G_777GAT_357[0] = G_749GAT_321b[0] ;
G_777GAT_357[1] = G_749GAT_321b[1] ;
G_777GAT_357[0] &= G_748GAT_329b[0] ;
G_777GAT_357[1] &= G_748GAT_329b[1] ;
G_772GAT_358[0] = G_746GAT_322b[0] ;
G_772GAT_358[1] = G_746GAT_322b[1] ;
G_772GAT_358[0] &= G_745GAT_330b[0] ;
G_772GAT_358[1] &= G_745GAT_330b[1] ;
G_771GAT_359[0] = G_743GAT_323b[0] ;
G_771GAT_359[1] = G_743GAT_323b[1] ;
G_771GAT_359[0] &= G_742GAT_331b[0] ;
G_771GAT_359[1] &= G_742GAT_331b[1] ;
G_770GAT_360[0] = G_740GAT_324b[0] ;
G_770GAT_360[1] = G_740GAT_324b[1] ;
G_770GAT_360[0] &= G_739GAT_332b[0] ;
G_770GAT_360[1] &= G_739GAT_332b[1] ;
G_769GAT_361[0] = G_737GAT_325b[0] ;
G_769GAT_361[1] = G_737GAT_325b[1] ;
G_769GAT_361[0] &= G_736GAT_333b[0] ;
G_769GAT_361[1] &= G_736GAT_333b[1] ;
G_792GAT_363[0] = G_782GAT_353b[0] ;
G_792GAT_363[1] = G_782GAT_353b[1] ;
G_792GAT_363[0] &= G_717GAT_296b[0] ;
G_792GAT_363[1] &= G_717GAT_296b[1] ;
G_793GAT_364b[0] = G_793GAT_364[0] ;
G_793GAT_364b[1] = G_793GAT_364[1] ;
temp = G_793GAT_364b[0] ;
G_793GAT_364b[0] = ~G_793GAT_364b[1] ;
G_793GAT_364b[1] = ~temp ;
G_790GAT_365[0] = G_778GAT_352b[0] ;
G_790GAT_365[1] = G_778GAT_352b[1] ;
G_790GAT_365[0] &= G_708GAT_298b[0] ;
G_790GAT_365[1] &= G_708GAT_298b[1] ;
G_791GAT_366b[0] = G_791GAT_366[0] ;
G_791GAT_366b[1] = G_791GAT_366[1] ;
temp = G_791GAT_366b[0] ;
G_791GAT_366b[0] = ~G_791GAT_366b[1] ;
G_791GAT_366b[1] = ~temp ;
G_788GAT_367[0] = G_773GAT_351b[0] ;
G_788GAT_367[1] = G_773GAT_351b[1] ;
G_788GAT_367[0] &= G_700GAT_300b[0] ;
G_788GAT_367[1] &= G_700GAT_300b[1] ;
G_789GAT_368b[0] = G_789GAT_368[0] ;
G_789GAT_368b[1] = G_789GAT_368[1] ;
temp = G_789GAT_368b[0] ;
G_789GAT_368b[0] = ~G_789GAT_368b[1] ;
G_789GAT_368b[1] = ~temp ;
G_812GAT_381[0] = G_796GAT_373[0] ;
G_812GAT_381[1] = G_796GAT_373[1] ;
G_812GAT_381[0] &= G_619GAT_278[0] ;
G_812GAT_381[1] &= G_619GAT_278[1] ;
G_813GAT_382[0] = G_796GAT_373[0] ;
G_813GAT_382[1] = G_796GAT_373[1] ;
G_813GAT_382[0] &= G_619GAT_278[0] ;
G_813GAT_382[1] &= G_619GAT_278[1] ;
G_813GAT_382[0] &= G_609GAT_280[0] ;
G_813GAT_382[1] &= G_609GAT_280[1] ;
G_814GAT_383[0] = G_796GAT_373[0] ;
G_814GAT_383[1] = G_796GAT_373[1] ;
G_814GAT_383[0] &= G_619GAT_278[0] ;
G_814GAT_383[1] &= G_619GAT_278[1] ;
G_814GAT_383[0] &= G_609GAT_280[0] ;
G_814GAT_383[1] &= G_609GAT_280[1] ;
G_814GAT_383[0] &= G_600GAT_282[0] ;
G_814GAT_383[1] &= G_600GAT_282[1] ;
G_807GAT_380[0] = G_796GAT_373[0] ;
G_807GAT_380[1] = G_796GAT_373[1] ;
G_807GAT_380[0] &= G_692GAT_303[0] ;
G_807GAT_380[1] &= G_692GAT_303[1] ;
G_786GAT_350[0] = G_758GAT_316b[0] ;
G_786GAT_350[1] = G_758GAT_316b[1] ;
G_786GAT_350[0] &= G_757GAT_317b[0] ;
G_786GAT_350[1] &= G_757GAT_317b[1] ;
G_792GAT_363b[0] = G_792GAT_363[0] ;
G_792GAT_363b[1] = G_792GAT_363[1] ;
temp = G_792GAT_363b[0] ;
G_792GAT_363b[0] = ~G_792GAT_363b[1] ;
G_792GAT_363b[1] = ~temp ;
G_790GAT_365b[0] = G_790GAT_365[0] ;
G_790GAT_365b[1] = G_790GAT_365[1] ;
temp = G_790GAT_365b[0] ;
G_790GAT_365b[0] = ~G_790GAT_365b[1] ;
G_790GAT_365b[1] = ~temp ;
G_788GAT_367b[0] = G_788GAT_367[0] ;
G_788GAT_367b[1] = G_788GAT_367[1] ;
temp = G_788GAT_367b[0] ;
G_788GAT_367b[0] = ~G_788GAT_367b[1] ;
G_788GAT_367b[1] = ~temp ;
G_796GAT_373b[0] = G_796GAT_373[0] ;
G_796GAT_373b[1] = G_796GAT_373[1] ;
temp = G_796GAT_373b[0] ;
G_796GAT_373b[0] = ~G_796GAT_373b[1] ;
G_796GAT_373b[1] = ~temp ;
G_794GAT_362[0] = G_786GAT_350[0] ;
G_794GAT_362[1] = G_786GAT_350[1] ;
G_794GAT_362[0] &= G_219GAT_50[0] ;
G_794GAT_362[1] &= G_219GAT_50[1] ;
G_822GAT_386[0] = G_812GAT_381[0] ;
G_822GAT_386[1] = G_812GAT_381[1] ;
G_822GAT_386[0] &= G_744GAT_342[0] ;
G_822GAT_386[1] &= G_744GAT_342[1] ;
G_819GAT_387[0] = G_813GAT_382[0] ;
G_819GAT_387[1] = G_813GAT_382[1] ;
G_819GAT_387[0] &= G_764GAT_343[0] ;
G_819GAT_387[1] &= G_764GAT_343[1] ;
G_819GAT_387[0] &= G_741GAT_345[0] ;
G_819GAT_387[1] &= G_741GAT_345[1] ;
G_815GAT_388[0] = G_814GAT_383[0] ;
G_815GAT_388[1] = G_814GAT_383[1] ;
G_815GAT_388[0] &= G_766GAT_344[0] ;
G_815GAT_388[1] &= G_766GAT_344[1] ;
G_815GAT_388[0] &= G_765GAT_346[0] ;
G_815GAT_388[1] &= G_765GAT_346[1] ;
G_815GAT_388[0] &= G_738GAT_347[0] ;
G_815GAT_388[1] &= G_738GAT_347[1] ;
G_804GAT_370[0] = G_793GAT_364b[0] ;
G_804GAT_370[1] = G_793GAT_364b[1] ;
G_804GAT_370[0] &= G_792GAT_363b[0] ;
G_804GAT_370[1] &= G_792GAT_363b[1] ;
G_803GAT_371[0] = G_791GAT_366b[0] ;
G_803GAT_371[1] = G_791GAT_366b[1] ;
G_803GAT_371[0] &= G_790GAT_365b[0] ;
G_803GAT_371[1] &= G_790GAT_365b[1] ;
G_802GAT_372[0] = G_789GAT_368b[0] ;
G_802GAT_372[1] = G_789GAT_368b[1] ;
G_802GAT_372[0] &= G_788GAT_367b[0] ;
G_802GAT_372[1] &= G_788GAT_367b[1] ;
G_806GAT_379[0] = G_796GAT_373b[0] ;
G_806GAT_379[1] = G_796GAT_373b[1] ;
G_806GAT_379[0] &= G_692GAT_303b[0] ;
G_806GAT_379[1] &= G_692GAT_303b[1] ;
G_807GAT_380b[0] = G_807GAT_380[0] ;
G_807GAT_380b[1] = G_807GAT_380[1] ;
temp = G_807GAT_380b[0] ;
G_807GAT_380b[0] = ~G_807GAT_380b[1] ;
G_807GAT_380b[1] = ~temp ;
G_810GAT_375[0] = G_804GAT_370[0] ;
G_810GAT_375[1] = G_804GAT_370[1] ;
G_810GAT_375[0] &= G_219GAT_50[0] ;
G_810GAT_375[1] &= G_219GAT_50[1] ;
G_809GAT_376[0] = G_803GAT_371[0] ;
G_809GAT_376[1] = G_803GAT_371[1] ;
G_809GAT_376[0] &= G_219GAT_50[0] ;
G_809GAT_376[1] &= G_219GAT_50[1] ;
G_808GAT_377[0] = G_802GAT_372[0] ;
G_808GAT_377[1] = G_802GAT_372[1] ;
G_808GAT_377[0] &= G_219GAT_50[0] ;
G_808GAT_377[1] &= G_219GAT_50[1] ;
G_841GAT_403[0] = G_593GAT_284[0] ;
G_841GAT_403[1] = G_593GAT_284[1] ;
G_841GAT_403[0] &= G_815GAT_388[0] ;
G_841GAT_403[1] &= G_815GAT_388[1] ;
G_835GAT_398[0] = G_822GAT_386[0] ;
G_835GAT_398[1] = G_822GAT_386[1] ;
G_835GAT_398[0] &= G_682GAT_306[0] ;
G_835GAT_398[1] &= G_682GAT_306[1] ;
G_833GAT_400[0] = G_819GAT_387[0] ;
G_833GAT_400[1] = G_819GAT_387[1] ;
G_833GAT_400[0] &= G_673GAT_309[0] ;
G_833GAT_400[1] &= G_673GAT_309[1] ;
G_831GAT_402[0] = G_815GAT_388[0] ;
G_831GAT_402[1] = G_815GAT_388[1] ;
G_831GAT_402[0] &= G_665GAT_312[0] ;
G_831GAT_402[1] &= G_665GAT_312[1] ;
G_794GAT_362b[0] = G_794GAT_362[0] ;
G_794GAT_362b[1] = G_794GAT_362[1] ;
temp = G_794GAT_362b[0] ;
G_794GAT_362b[0] = ~G_794GAT_362b[1] ;
G_794GAT_362b[1] = ~temp ;
G_806GAT_379b[0] = G_806GAT_379[0] ;
G_806GAT_379b[1] = G_806GAT_379[1] ;
temp = G_806GAT_379b[0] ;
G_806GAT_379b[0] = ~G_806GAT_379b[1] ;
G_806GAT_379b[1] = ~temp ;
G_822GAT_386b[0] = G_822GAT_386[0] ;
G_822GAT_386b[1] = G_822GAT_386[1] ;
temp = G_822GAT_386b[0] ;
G_822GAT_386b[0] = ~G_822GAT_386b[1] ;
G_822GAT_386b[1] = ~temp ;
G_819GAT_387b[0] = G_819GAT_387[0] ;
G_819GAT_387b[1] = G_819GAT_387[1] ;
temp = G_819GAT_387b[0] ;
G_819GAT_387b[0] = ~G_819GAT_387b[1] ;
G_819GAT_387b[1] = ~temp ;
G_815GAT_388b[0] = G_815GAT_388[0] ;
G_815GAT_388b[1] = G_815GAT_388[1] ;
temp = G_815GAT_388b[0] ;
G_815GAT_388b[0] = ~G_815GAT_388b[1] ;
G_815GAT_388b[1] = ~temp ;
G_849GAT_411[0] = G_841GAT_403[0] ;
G_849GAT_411[1] = G_841GAT_403[1] ;
G_849GAT_411[0] &= G_735GAT_348[0] ;
G_849GAT_411[1] &= G_735GAT_348[1] ;
G_805GAT_374[0] = G_794GAT_362b[0] ;
G_805GAT_374[1] = G_794GAT_362b[1] ;
G_805GAT_374[0] &= G_340GAT_73b[0] ;
G_805GAT_374[1] &= G_340GAT_73b[1] ;
G_810GAT_375b[0] = G_810GAT_375[0] ;
G_810GAT_375b[1] = G_810GAT_375[1] ;
temp = G_810GAT_375b[0] ;
G_810GAT_375b[0] = ~G_810GAT_375b[1] ;
G_810GAT_375b[1] = ~temp ;
G_809GAT_376b[0] = G_809GAT_376[0] ;
G_809GAT_376b[1] = G_809GAT_376[1] ;
temp = G_809GAT_376b[0] ;
G_809GAT_376b[0] = ~G_809GAT_376b[1] ;
G_809GAT_376b[1] = ~temp ;
G_808GAT_377b[0] = G_808GAT_377[0] ;
G_808GAT_377b[1] = G_808GAT_377[1] ;
temp = G_808GAT_377b[0] ;
G_808GAT_377b[0] = ~G_808GAT_377b[1] ;
G_808GAT_377b[1] = ~temp ;
G_825GAT_385[0] = G_807GAT_380b[0] ;
G_825GAT_385[1] = G_807GAT_380b[1] ;
G_825GAT_385[0] &= G_806GAT_379b[0] ;
G_825GAT_385[1] &= G_806GAT_379b[1] ;
G_834GAT_397[0] = G_822GAT_386b[0] ;
G_834GAT_397[1] = G_822GAT_386b[1] ;
G_834GAT_397[0] &= G_682GAT_306b[0] ;
G_834GAT_397[1] &= G_682GAT_306b[1] ;
G_835GAT_398b[0] = G_835GAT_398[0] ;
G_835GAT_398b[1] = G_835GAT_398[1] ;
temp = G_835GAT_398b[0] ;
G_835GAT_398b[0] = ~G_835GAT_398b[1] ;
G_835GAT_398b[1] = ~temp ;
G_832GAT_399[0] = G_819GAT_387b[0] ;
G_832GAT_399[1] = G_819GAT_387b[1] ;
G_832GAT_399[0] &= G_673GAT_309b[0] ;
G_832GAT_399[1] &= G_673GAT_309b[1] ;
G_833GAT_400b[0] = G_833GAT_400[0] ;
G_833GAT_400b[1] = G_833GAT_400[1] ;
temp = G_833GAT_400b[0] ;
G_833GAT_400b[0] = ~G_833GAT_400b[1] ;
G_833GAT_400b[1] = ~temp ;
G_830GAT_401[0] = G_815GAT_388b[0] ;
G_830GAT_401[1] = G_815GAT_388b[1] ;
G_830GAT_401[0] &= G_665GAT_312b[0] ;
G_830GAT_401[1] &= G_665GAT_312b[1] ;
G_831GAT_402b[0] = G_831GAT_402[0] ;
G_831GAT_402b[1] = G_831GAT_402[1] ;
temp = G_831GAT_402b[0] ;
G_831GAT_402b[0] = ~G_831GAT_402b[1] ;
G_831GAT_402b[1] = ~temp ;
G_836GAT_392[0] = G_825GAT_385[0] ;
G_836GAT_392[1] = G_825GAT_385[1] ;
G_836GAT_392[0] &= G_219GAT_50[0] ;
G_836GAT_392[1] &= G_219GAT_50[1] ;
G_811GAT_378[0] = G_529GAT_209[0] ;
G_811GAT_378[1] = G_529GAT_209[1] ;
G_811GAT_378[0] &= G_731GAT_290[0] ;
G_811GAT_378[1] &= G_731GAT_290[1] ;
G_811GAT_378[0] &= G_787GAT_354[0] ;
G_811GAT_378[1] &= G_787GAT_354[1] ;
G_811GAT_378[0] &= G_805GAT_374[0] ;
G_811GAT_378[1] &= G_805GAT_374[1] ;
G_828GAT_389[0] = G_810GAT_375b[0] ;
G_828GAT_389[1] = G_810GAT_375b[1] ;
G_828GAT_389[0] &= G_338GAT_76b[0] ;
G_828GAT_389[1] &= G_338GAT_76b[1] ;
G_827GAT_390[0] = G_809GAT_376b[0] ;
G_827GAT_390[1] = G_809GAT_376b[1] ;
G_827GAT_390[0] &= G_336GAT_77b[0] ;
G_827GAT_390[1] &= G_336GAT_77b[1] ;
G_826GAT_391[0] = G_808GAT_377b[0] ;
G_826GAT_391[1] = G_808GAT_377b[1] ;
G_826GAT_391[0] &= G_335GAT_80b[0] ;
G_826GAT_391[1] &= G_335GAT_80b[1] ;
G_834GAT_397b[0] = G_834GAT_397[0] ;
G_834GAT_397b[1] = G_834GAT_397[1] ;
temp = G_834GAT_397b[0] ;
G_834GAT_397b[0] = ~G_834GAT_397b[1] ;
G_834GAT_397b[1] = ~temp ;
G_832GAT_399b[0] = G_832GAT_399[0] ;
G_832GAT_399b[1] = G_832GAT_399[1] ;
temp = G_832GAT_399b[0] ;
G_832GAT_399b[0] = ~G_832GAT_399b[1] ;
G_832GAT_399b[1] = ~temp ;
G_830GAT_401b[0] = G_830GAT_401[0] ;
G_830GAT_401b[1] = G_830GAT_401[1] ;
temp = G_830GAT_401b[0] ;
G_830GAT_401b[0] = ~G_830GAT_401b[1] ;
G_830GAT_401b[1] = ~temp ;
G_839GAT_394[0] = G_528GAT_210[0] ;
G_839GAT_394[1] = G_528GAT_210[1] ;
G_839GAT_394[0] &= G_721GAT_291[0] ;
G_839GAT_394[1] &= G_721GAT_291[1] ;
G_839GAT_394[0] &= G_785GAT_355[0] ;
G_839GAT_394[1] &= G_785GAT_355[1] ;
G_839GAT_394[0] &= G_828GAT_389[0] ;
G_839GAT_394[1] &= G_828GAT_389[1] ;
G_838GAT_395[0] = G_527GAT_211[0] ;
G_838GAT_395[1] = G_527GAT_211[1] ;
G_838GAT_395[0] &= G_712GAT_292[0] ;
G_838GAT_395[1] &= G_712GAT_292[1] ;
G_838GAT_395[0] &= G_781GAT_356[0] ;
G_838GAT_395[1] &= G_781GAT_356[1] ;
G_838GAT_395[0] &= G_827GAT_390[0] ;
G_838GAT_395[1] &= G_827GAT_390[1] ;
G_837GAT_396[0] = G_704GAT_302[0] ;
G_837GAT_396[1] = G_704GAT_302[1] ;
G_837GAT_396[0] &= G_777GAT_357[0] ;
G_837GAT_396[1] &= G_777GAT_357[1] ;
G_837GAT_396[0] &= G_826GAT_391[0] ;
G_837GAT_396[1] &= G_826GAT_391[1] ;
G_836GAT_392b[0] = G_836GAT_392[0] ;
G_836GAT_392b[1] = G_836GAT_392[1] ;
temp = G_836GAT_392b[0] ;
G_836GAT_392b[0] = ~G_836GAT_392b[1] ;
G_836GAT_392b[1] = ~temp ;
G_844GAT_408[0] = G_835GAT_398b[0] ;
G_844GAT_408[1] = G_835GAT_398b[1] ;
G_844GAT_408[0] &= G_834GAT_397b[0] ;
G_844GAT_408[1] &= G_834GAT_397b[1] ;
G_843GAT_409[0] = G_833GAT_400b[0] ;
G_843GAT_409[1] = G_833GAT_400b[1] ;
G_843GAT_409[0] &= G_832GAT_399b[0] ;
G_843GAT_409[1] &= G_832GAT_399b[1] ;
G_842GAT_410[0] = G_831GAT_402b[0] ;
G_842GAT_410[1] = G_831GAT_402b[1] ;
G_842GAT_410[0] &= G_830GAT_401b[0] ;
G_842GAT_410[1] &= G_830GAT_401b[1] ;
G_853GAT_413[0] = G_844GAT_408[0] ;
G_853GAT_413[1] = G_844GAT_408[1] ;
G_853GAT_413[0] &= G_219GAT_50[0] ;
G_853GAT_413[1] &= G_219GAT_50[1] ;
G_852GAT_414[0] = G_843GAT_409[0] ;
G_852GAT_414[1] = G_843GAT_409[1] ;
G_852GAT_414[0] &= G_219GAT_50[0] ;
G_852GAT_414[1] &= G_219GAT_50[1] ;
G_851GAT_415[0] = G_842GAT_410[0] ;
G_851GAT_415[1] = G_842GAT_410[1] ;
G_851GAT_415[0] &= G_219GAT_50[0] ;
G_851GAT_415[1] &= G_219GAT_50[1] ;
G_845GAT_412[0] = G_836GAT_392b[0] ;
G_845GAT_412[1] = G_836GAT_392b[1] ;
G_845GAT_412[0] &= G_334GAT_81b[0] ;
G_845GAT_412[1] &= G_334GAT_81b[1] ;
G_854GAT_419[0] = G_696GAT_305[0] ;
G_854GAT_419[1] = G_696GAT_305[1] ;
G_854GAT_419[0] &= G_772GAT_358[0] ;
G_854GAT_419[1] &= G_772GAT_358[1] ;
G_854GAT_419[0] &= G_845GAT_412[0] ;
G_854GAT_419[1] &= G_845GAT_412[1] ;
G_853GAT_413b[0] = G_853GAT_413[0] ;
G_853GAT_413b[1] = G_853GAT_413[1] ;
temp = G_853GAT_413b[0] ;
G_853GAT_413b[0] = ~G_853GAT_413b[1] ;
G_853GAT_413b[1] = ~temp ;
G_852GAT_414b[0] = G_852GAT_414[0] ;
G_852GAT_414b[1] = G_852GAT_414[1] ;
temp = G_852GAT_414b[0] ;
G_852GAT_414b[0] = ~G_852GAT_414b[1] ;
G_852GAT_414b[1] = ~temp ;
G_851GAT_415b[0] = G_851GAT_415[0] ;
G_851GAT_415b[1] = G_851GAT_415[1] ;
temp = G_851GAT_415b[0] ;
G_851GAT_415b[0] = ~G_851GAT_415b[1] ;
G_851GAT_415b[1] = ~temp ;
G_859GAT_421[0] = G_851GAT_415b[0] ;
G_859GAT_421[1] = G_851GAT_415b[1] ;
G_859GAT_421[0] &= G_417GAT_142b[0] ;
G_859GAT_421[1] &= G_417GAT_142b[1] ;
G_861GAT_427[0] = G_853GAT_413b[0] ;
G_861GAT_427[1] = G_853GAT_413b[1] ;
G_861GAT_427[0] &= G_333GAT_84b[0] ;
G_861GAT_427[1] &= G_333GAT_84b[1] ;
G_860GAT_428[0] = G_852GAT_414b[0] ;
G_860GAT_428[1] = G_852GAT_414b[1] ;
G_860GAT_428[0] &= G_332GAT_85b[0] ;
G_860GAT_428[1] &= G_332GAT_85b[1] ;
G_869GAT_430[0] = G_686GAT_308[0] ;
G_869GAT_430[1] = G_686GAT_308[1] ;
G_869GAT_430[0] &= G_771GAT_359[0] ;
G_869GAT_430[1] &= G_771GAT_359[1] ;
G_869GAT_430[0] &= G_861GAT_427[0] ;
G_869GAT_430[1] &= G_861GAT_427[1] ;
G_868GAT_431[0] = G_677GAT_311[0] ;
G_868GAT_431[1] = G_677GAT_311[1] ;
G_868GAT_431[0] &= G_770GAT_360[0] ;
G_868GAT_431[1] &= G_770GAT_360[1] ;
G_868GAT_431[0] &= G_860GAT_428[0] ;
G_868GAT_431[1] &= G_860GAT_428[1] ;
G_867GAT_432[0] = G_669GAT_314[0] ;
G_867GAT_432[1] = G_669GAT_314[1] ;
G_867GAT_432[0] &= G_769GAT_361[0] ;
G_867GAT_432[1] &= G_769GAT_361[1] ;
G_867GAT_432[0] &= G_859GAT_421[0] ;
G_867GAT_432[1] &= G_859GAT_421[1] ;
G_PO_388GAT_133[0] = G_388GAT_133[0] ;
G_PO_388GAT_133[1] = G_388GAT_133[1] ;
G_PO_389GAT_132[0] = G_389GAT_132[0] ;
G_PO_389GAT_132[1] = G_389GAT_132[1] ;
G_PO_390GAT_131[0] = G_390GAT_131[0] ;
G_PO_390GAT_131[1] = G_390GAT_131[1] ;
G_PO_391GAT_124[0] = G_391GAT_124[0] ;
G_PO_391GAT_124[1] = G_391GAT_124[1] ;
G_PO_418GAT_168[0] = G_418GAT_168[0] ;
G_PO_418GAT_168[1] = G_418GAT_168[1] ;
G_PO_419GAT_164[0] = G_419GAT_164[0] ;
G_PO_419GAT_164[1] = G_419GAT_164[1] ;
G_PO_420GAT_158[0] = G_420GAT_158[0] ;
G_PO_420GAT_158[1] = G_420GAT_158[1] ;
G_PO_421GAT_162[0] = G_421GAT_162[0] ;
G_PO_421GAT_162[1] = G_421GAT_162[1] ;
G_PO_422GAT_161[0] = G_422GAT_161[0] ;
G_PO_422GAT_161[1] = G_422GAT_161[1] ;
G_PO_423GAT_155[0] = G_423GAT_155[0] ;
G_PO_423GAT_155[1] = G_423GAT_155[1] ;
G_PO_446GAT_183[0] = G_446GAT_183[0] ;
G_PO_446GAT_183[1] = G_446GAT_183[1] ;
G_PO_447GAT_182[0] = G_447GAT_182[0] ;
G_PO_447GAT_182[1] = G_447GAT_182[1] ;
G_PO_448GAT_179[0] = G_448GAT_179[0] ;
G_PO_448GAT_179[1] = G_448GAT_179[1] ;
G_PO_449GAT_176[0] = G_449GAT_176[0] ;
G_PO_449GAT_176[1] = G_449GAT_176[1] ;
G_PO_450GAT_173[0] = G_450GAT_173[0] ;
G_PO_450GAT_173[1] = G_450GAT_173[1] ;
G_PO_767GAT_349[0] = G_767GAT_349[0] ;
G_PO_767GAT_349[1] = G_767GAT_349[1] ;
G_PO_768GAT_334[0] = G_768GAT_334[0] ;
G_PO_768GAT_334[1] = G_768GAT_334[1] ;
G_PO_850GAT_404[0] = G_850GAT_404[0] ;
G_PO_850GAT_404[1] = G_850GAT_404[1] ;
G_PO_863GAT_424[0] = G_863GAT_424[0] ;
G_PO_863GAT_424[1] = G_863GAT_424[1] ;
G_PO_864GAT_423[0] = G_864GAT_423[0] ;
G_PO_864GAT_423[1] = G_864GAT_423[1] ;
G_PO_865GAT_422[0] = G_865GAT_422[0] ;
G_PO_865GAT_422[1] = G_865GAT_422[1] ;
G_PO_866GAT_426[0] = G_866GAT_426[0] ;
G_PO_866GAT_426[1] = G_866GAT_426[1] ;
G_PO_874GAT_433[0] = G_874GAT_433[0] ;
G_PO_874GAT_433[1] = G_874GAT_433[1] ;
G_PO_878GAT_442[0] = G_878GAT_442[0] ;
G_PO_878GAT_442[1] = G_878GAT_442[1] ;
G_PO_879GAT_441[0] = G_879GAT_441[0] ;
G_PO_879GAT_441[1] = G_879GAT_441[1] ;
G_PO_880GAT_440[0] = G_880GAT_440[0] ;
G_PO_880GAT_440[1] = G_880GAT_440[1] ;
}

void printIO(unsigned idx)
{
for (unsigned j=0; j<idx; j++)
{
if(G_1GAT_0[0][j]==0)
{
    if(G_1GAT_0[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_1GAT_0[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_8GAT_1[0][j]==0)
{
    if(G_8GAT_1[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_8GAT_1[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_13GAT_2[0][j]==0)
{
    if(G_13GAT_2[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_13GAT_2[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_17GAT_3[0][j]==0)
{
    if(G_17GAT_3[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_17GAT_3[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_26GAT_4[0][j]==0)
{
    if(G_26GAT_4[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_26GAT_4[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_29GAT_5[0][j]==0)
{
    if(G_29GAT_5[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_29GAT_5[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_36GAT_6[0][j]==0)
{
    if(G_36GAT_6[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_36GAT_6[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_42GAT_7[0][j]==0)
{
    if(G_42GAT_7[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_42GAT_7[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_51GAT_8[0][j]==0)
{
    if(G_51GAT_8[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_51GAT_8[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_55GAT_9[0][j]==0)
{
    if(G_55GAT_9[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_55GAT_9[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_59GAT_10[0][j]==0)
{
    if(G_59GAT_10[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_59GAT_10[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_68GAT_11[0][j]==0)
{
    if(G_68GAT_11[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_68GAT_11[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_72GAT_12[0][j]==0)
{
    if(G_72GAT_12[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_72GAT_12[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_73GAT_13[0][j]==0)
{
    if(G_73GAT_13[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_73GAT_13[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_74GAT_14[0][j]==0)
{
    if(G_74GAT_14[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_74GAT_14[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_75GAT_15[0][j]==0)
{
    if(G_75GAT_15[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_75GAT_15[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_80GAT_16[0][j]==0)
{
    if(G_80GAT_16[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_80GAT_16[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_85GAT_17[0][j]==0)
{
    if(G_85GAT_17[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_85GAT_17[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_86GAT_18[0][j]==0)
{
    if(G_86GAT_18[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_86GAT_18[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_87GAT_19[0][j]==0)
{
    if(G_87GAT_19[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_87GAT_19[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_88GAT_20[0][j]==0)
{
    if(G_88GAT_20[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_88GAT_20[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_89GAT_21[0][j]==0)
{
    if(G_89GAT_21[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_89GAT_21[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_90GAT_22[0][j]==0)
{
    if(G_90GAT_22[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_90GAT_22[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_91GAT_23[0][j]==0)
{
    if(G_91GAT_23[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_91GAT_23[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_96GAT_24[0][j]==0)
{
    if(G_96GAT_24[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_96GAT_24[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_101GAT_25[0][j]==0)
{
    if(G_101GAT_25[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_101GAT_25[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_106GAT_26[0][j]==0)
{
    if(G_106GAT_26[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_106GAT_26[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_111GAT_27[0][j]==0)
{
    if(G_111GAT_27[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_111GAT_27[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_116GAT_28[0][j]==0)
{
    if(G_116GAT_28[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_116GAT_28[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_121GAT_29[0][j]==0)
{
    if(G_121GAT_29[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_121GAT_29[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_126GAT_30[0][j]==0)
{
    if(G_126GAT_30[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_126GAT_30[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_130GAT_31[0][j]==0)
{
    if(G_130GAT_31[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_130GAT_31[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_135GAT_32[0][j]==0)
{
    if(G_135GAT_32[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_135GAT_32[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_138GAT_33[0][j]==0)
{
    if(G_138GAT_33[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_138GAT_33[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_143GAT_34[0][j]==0)
{
    if(G_143GAT_34[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_143GAT_34[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_146GAT_35[0][j]==0)
{
    if(G_146GAT_35[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_146GAT_35[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_149GAT_36[0][j]==0)
{
    if(G_149GAT_36[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_149GAT_36[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_152GAT_37[0][j]==0)
{
    if(G_152GAT_37[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_152GAT_37[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_153GAT_38[0][j]==0)
{
    if(G_153GAT_38[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_153GAT_38[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_156GAT_39[0][j]==0)
{
    if(G_156GAT_39[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_156GAT_39[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_159GAT_40[0][j]==0)
{
    if(G_159GAT_40[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_159GAT_40[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_165GAT_41[0][j]==0)
{
    if(G_165GAT_41[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_165GAT_41[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_171GAT_42[0][j]==0)
{
    if(G_171GAT_42[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_171GAT_42[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_177GAT_43[0][j]==0)
{
    if(G_177GAT_43[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_177GAT_43[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_183GAT_44[0][j]==0)
{
    if(G_183GAT_44[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_183GAT_44[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_189GAT_45[0][j]==0)
{
    if(G_189GAT_45[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_189GAT_45[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_195GAT_46[0][j]==0)
{
    if(G_195GAT_46[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_195GAT_46[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_201GAT_47[0][j]==0)
{
    if(G_201GAT_47[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_201GAT_47[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_207GAT_48[0][j]==0)
{
    if(G_207GAT_48[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_207GAT_48[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_210GAT_49[0][j]==0)
{
    if(G_210GAT_49[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_210GAT_49[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_219GAT_50[0][j]==0)
{
    if(G_219GAT_50[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_219GAT_50[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_228GAT_51[0][j]==0)
{
    if(G_228GAT_51[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_228GAT_51[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_237GAT_52[0][j]==0)
{
    if(G_237GAT_52[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_237GAT_52[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_246GAT_53[0][j]==0)
{
    if(G_246GAT_53[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_246GAT_53[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_255GAT_54[0][j]==0)
{
    if(G_255GAT_54[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_255GAT_54[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_259GAT_55[0][j]==0)
{
    if(G_259GAT_55[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_259GAT_55[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_260GAT_56[0][j]==0)
{
    if(G_260GAT_56[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_260GAT_56[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_261GAT_57[0][j]==0)
{
    if(G_261GAT_57[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_261GAT_57[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_267GAT_58[0][j]==0)
{
    if(G_267GAT_58[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_267GAT_58[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_268GAT_59[0][j]==0)
{
    if(G_268GAT_59[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_268GAT_59[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
fout<<" ";
if(G_PO_388GAT_133[0][j]==0)
{
    if(G_PO_388GAT_133[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_388GAT_133[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_389GAT_132[0][j]==0)
{
    if(G_PO_389GAT_132[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_389GAT_132[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_390GAT_131[0][j]==0)
{
    if(G_PO_390GAT_131[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_390GAT_131[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_391GAT_124[0][j]==0)
{
    if(G_PO_391GAT_124[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_391GAT_124[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_418GAT_168[0][j]==0)
{
    if(G_PO_418GAT_168[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_418GAT_168[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_419GAT_164[0][j]==0)
{
    if(G_PO_419GAT_164[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_419GAT_164[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_420GAT_158[0][j]==0)
{
    if(G_PO_420GAT_158[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_420GAT_158[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_421GAT_162[0][j]==0)
{
    if(G_PO_421GAT_162[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_421GAT_162[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_422GAT_161[0][j]==0)
{
    if(G_PO_422GAT_161[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_422GAT_161[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_423GAT_155[0][j]==0)
{
    if(G_PO_423GAT_155[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_423GAT_155[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_446GAT_183[0][j]==0)
{
    if(G_PO_446GAT_183[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_446GAT_183[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_447GAT_182[0][j]==0)
{
    if(G_PO_447GAT_182[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_447GAT_182[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_448GAT_179[0][j]==0)
{
    if(G_PO_448GAT_179[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_448GAT_179[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_449GAT_176[0][j]==0)
{
    if(G_PO_449GAT_176[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_449GAT_176[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_450GAT_173[0][j]==0)
{
    if(G_PO_450GAT_173[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_450GAT_173[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_767GAT_349[0][j]==0)
{
    if(G_PO_767GAT_349[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_767GAT_349[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_768GAT_334[0][j]==0)
{
    if(G_PO_768GAT_334[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_768GAT_334[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_850GAT_404[0][j]==0)
{
    if(G_PO_850GAT_404[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_850GAT_404[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_863GAT_424[0][j]==0)
{
    if(G_PO_863GAT_424[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_863GAT_424[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_864GAT_423[0][j]==0)
{
    if(G_PO_864GAT_423[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_864GAT_423[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_865GAT_422[0][j]==0)
{
    if(G_PO_865GAT_422[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_865GAT_422[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_866GAT_426[0][j]==0)
{
    if(G_PO_866GAT_426[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_866GAT_426[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_874GAT_433[0][j]==0)
{
    if(G_PO_874GAT_433[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_874GAT_433[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_878GAT_442[0][j]==0)
{
    if(G_PO_878GAT_442[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_878GAT_442[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_879GAT_441[0][j]==0)
{
    if(G_PO_879GAT_441[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_879GAT_441[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
if(G_PO_880GAT_440[0][j]==0)
{
    if(G_PO_880GAT_440[1][j]==1)
        fout<<"F";
    else
        fout<<"0";
}
else
{
    if(G_PO_880GAT_440[1][j]==1)
        fout<<"1";
    else
        fout<<"2";
}
fout<<endl;
}
}
