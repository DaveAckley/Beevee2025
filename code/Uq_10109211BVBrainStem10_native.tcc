/**                                      -*- mode:C++ -*- */

#include <time.h> /* for localtime, strftime */

#include "Uq_10106UrSelf10.h"
#include "BrainStemSupport.h"

#include "GlobalHooks.h"

namespace MFM{

  template<class EC>
  BrainStemSupport& getBrainStemSupportSingleton() {
    static BrainStemSupport bss;
    return bss;
  }

  // Version getVersion() native;
  template<class EC>
  Ui_Ut_14181u<EC> Uq_10109211BVBrainStem10<EC>::Uf_9210getVersion(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {
    BrainStemSupport & bss = getBrainStemSupportSingleton<EC>();
    const u32 v = bss.getVersion();
    Ui_Ut_14181u<EC> ret(v);

    return ret;
  } // Uf_9210getVersion

  // Bool open() native;
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211BVBrainStem10<EC>::Uf_4open(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {
    BrainStemSupport & bss = getBrainStemSupportSingleton<EC>();
    bool b = bss.open();
    Ui_Ut_10111b<EC> ret(b); 
    return ret;
  } // Uf_4open

  // Bool close() native;
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211BVBrainStem10<EC>::Uf_5close(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {
    BrainStemSupport & bss = getBrainStemSupportSingleton<EC>();
    bool b = bss.close();
    Ui_Ut_10111b<EC> ret(b); 
    return ret;
  } // Uf_5close

  // TermCount getNumTerms() native;
  template<class EC>
  Ui_Ut_10181u<EC> Uq_10109211BVBrainStem10<EC>::Uf_9211getNumTerms(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {
    BrainStemSupport & bss = getBrainStemSupportSingleton<EC>();

    const u32 count = bss.getTermCount();
    Ui_Ut_10181u<EC> ret(count);
    return ret;
  } // Uf_9211getNumTerms

  // Buf8 getTermName(TermCount index) native;
  template<class EC>
  Ui_Ut_18181u<EC> Uq_10109211BVBrainStem10<EC>::Uf_9211getTermName(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181u<EC>& Uv_5index) const
  {

    BrainStemSupport & bss = getBrainStemSupportSingleton<EC>();

    Ui_Ut_18181u<EC> ret;

    const u32 index = Uv_5index.read();
    const char * name = bss.getTermName(index);

    if (name != 0) {
      for (u32 i = 0u; i < 8u; ++i) {
        char ch = name[i];
        if (ch == 0) break;
        Ui_Ut_r10181u<EC> retref(ret, i * 8u, uc);
        retref.write((u32) ch);
      }
    }

    return ret;
  } // Uf_9211getTermName

  // Unsigned(2) getTermType(TermCount index) native;
  template<class EC>
  Ui_Ut_10121u<EC> Uq_10109211BVBrainStem10<EC>::Uf_9211getTermType(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181u<EC>& Uv_5index) const
  {
    BrainStemSupport & bss = getBrainStemSupportSingleton<EC>();
    const u32 index = Uv_5index.read();
    BrainStemSupport::TagType tt = bss.getTermType(index);
    Ui_Ut_10121u<EC> ret(tt);
    return ret;
  } // Uf_9211getTermType

  // Unsigned(2) getTermRange(TermCount index) native;
  template<class EC>
  Ui_Ut_10121u<EC> Uq_10109211BVBrainStem10<EC>::Uf_9212getTermRange(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181u<EC>& Uv_5index) const
  {
    BrainStemSupport & bss = getBrainStemSupportSingleton<EC>();
    const u32 index = Uv_5index.read();
    BrainStemSupport::TagRange tr = bss.getTermRange(index);
    Ui_Ut_10121u<EC> ret(tr);
    return ret;
  } // Uf_9212getTermRange
  
//! BVBrainStem.ulam:131:   ASCII getTermValueUnsigned(TermCount index) native; 
  template<class EC>
  Ui_Ut_10181u<EC> Uq_10109211BVBrainStem10<EC>::Uf_9220getTermValueUnsigned(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181u<EC>& Uv_5index) const
  {
    BrainStemSupport & bss = getBrainStemSupportSingleton<EC>();
    const u32 index = Uv_5index.read();
    int val = bss.getTermValue(index); //illegal returns NOTERMVALUE
    Ui_Ut_10181u<EC> ret((u32) val);
    return ret;
  } // Uf_9220getTermValueUnsigned

//! BVBrainStem.ulam:132:   Int(8) getTermValueSigned(TermCount index) native;
  template<class EC>
  Ui_Ut_10181i<EC> Uq_10109211BVBrainStem10<EC>::Uf_9218getTermValueSigned(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181u<EC>& Uv_5index) const
  {
    BrainStemSupport & bss = getBrainStemSupportSingleton<EC>();
    const u32 index = Uv_5index.read();
    int val = bss.getTermValue(index); //illegal returns NOTERMVALUE

    Ui_Ut_10181i<EC> ret(val);
    return ret;
  } // Uf_9218getTermValueSigned

#if 0  
  // ASCII getTermValue(TermCount index) native;
  template<class EC>
  Ui_Ut_10181u<EC> Uq_10109211BVBrainStem10<EC>::Uf_9212getTermValue(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181u<EC>& Uv_5index) const
  {
    BrainStemSupport & bss = getBrainStemSupportSingleton<EC>();
    const u32 index = Uv_5index.read();
    int val = bss.getTermValue(index); //illegal returns -1

    Ui_Ut_10181u<EC> ret((u32) val); // which turns into 255 hmm
    return ret;
  } // Uf_9212getTermValue
#endif

//! BVBrainStem.ulam:130:   Bool setTermValueUnsigned(TermCount index, ASCII value) //native;
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211BVBrainStem10<EC>::Uf_9220setTermValueUnsigned(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181u<EC>& Uv_5index, Ui_Ut_10181u<EC>& Uv_5value) const
  {
    BrainStemSupport & bss = getBrainStemSupportSingleton<EC>();
    const u32 index = Uv_5index.read();
    const u32 value = Uv_5value.read();
    bool res = bss.setTermValueUnsigned(index, (MFM::u8) value); 

    Ui_Ut_10111b<EC> ret(res);
    return ret;
  } // Uf_9220setTermValueUnsigned

//! BVBrainStem.ulam:131:   Bool setTermValueSigned(TermCount index, Int(8) value) native;
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211BVBrainStem10<EC>::Uf_9218setTermValueSigned(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181u<EC>& Uv_5index, Ui_Ut_10181i<EC>& Uv_5value) const
  {
    BrainStemSupport & bss = getBrainStemSupportSingleton<EC>();
    const u32 index = Uv_5index.read();
    const s32 value = Uv_5value.read();
    bool res = bss.setTermValueSigned(index, (MFM::s8) value); 

    Ui_Ut_10111b<EC> ret(res);
    return ret;
  } // Uf_9218setTermValueSigned

  // Bool newSense(TermCount index) native;
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211BVBrainStem10<EC>::Uf_8newSense(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181u<EC>& Uv_5index) const
  {
    BrainStemSupport & bss = getBrainStemSupportSingleton<EC>();
    const u32 index = Uv_5index.read();
    bool isnew = bss.newRead(index);

    Ui_Ut_10111b<EC> ret(isnew ? 1u : 0u);
    return ret;
  } // Uf_8newSense

#if 0
  // Bool newSenses() native;
  template<class EC>
  Ui_Ut_10111b<EC> Uq_10109211BVBrainStem10<EC>::Uf_919newSenses(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {
    BrainStemSupport & bss = getBrainStemSupportSingleton<EC>();
    bool res = bss.newSenses();
    if (res) { // XXX AUTOSNAPSHOTHACK
      int idx = bss.getTermIndex("CADENCE");
      u32 cadence = 5u;
      if (idx >= 0) {
        int val = bss.getTermValue(idx);
        if (val > 0) cadence = (u32) val;
      }
      time_t itime = bss.getISecs();
      itime = (itime/cadence)*cadence; // round down to even cadence
      struct tm ltime;
      localtime_r(&itime,&ltime);
      const size_t LEN = 500u;
      const char * dirp = bss.getSnapshotDirIfAny();
      if (dirp) {
        char buf[LEN];
        int pos = snprintf(buf,LEN,"%s/",dirp);
        if (pos >= 0 && pos < (int) LEN) {
          strftime(&buf[pos],LEN-pos,"%Y%m%d%H%M%S.png",&ltime);
          GlobalHooks & hooks = GlobalHooks::getSingleton();
          hooks.runHook("RequestSnapshot",(void*) buf);
        }
      } else res = false;
    }
    Ui_Ut_10111b<EC> ret(res);
    return ret;
  } // Uf_919newSenses
#endif    

  
} //MFM

