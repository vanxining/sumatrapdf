// DON'T EDIT MANUALLY !!!!
// auto-generated by gen_txt.py !!!!

#ifndef MuiButtonVectorDef_h
#define MuiButtonVectorDef_h

struct TxtNode;

struct ButtonVectorDef {
    const char *  name;
    const char *  path;
    const char *  styleDefault;
    const char *  styleMouseOver;
};

ButtonVectorDef *DeserializeButtonVectorDef(const char *data, size_t dataLen);
ButtonVectorDef *DeserializeButtonVectorDefWithDefault(const char *data, size_t dataLen, const char *defaultData, size_t defaultDataLen);
ButtonVectorDef *DeserializeButtonVectorDef(TxtNode* root);
uint8_t *SerializeButtonVectorDef(ButtonVectorDef *, size_t *dataLenOut);
void FreeButtonVectorDef(ButtonVectorDef *);

#endif
