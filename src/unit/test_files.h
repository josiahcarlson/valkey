/* Do not modify this file, it's automatically generated from utils/generate-unit-test-header.py */
typedef int unitTestProc(int argc, char **argv, int flags);

typedef struct unitTest {
    char *name;
    unitTestProc *proc;
} unitTest;

int test_crc64(int argc, char **argv, int flags);
int test_crc64combine(int argc, char **argv, int flags);
int test_intsetValueEncodings(int argc, char **argv, int flags);
int test_intsetBasicAdding(int argc, char **argv, int flags);
int test_intsetLargeNumberRandomAdd(int argc, char **argv, int flags);
int test_intsetUpgradeFromint16Toint32(int argc, char **argv, int flags);
int test_intsetUpgradeFromint16Toint64(int argc, char **argv, int flags);
int test_intsetUpgradeFromint32Toint64(int argc, char **argv, int flags);
int test_intsetStressLookups(int argc, char **argv, int flags);
int test_intsetStressAddDelete(int argc, char **argv, int flags);
int test_kvstoreAdd16Keys(int argc, char **argv, int flags);
int test_kvstoreIteratorRemoveAllKeysNoDeleteEmptyDict(int argc, char **argv, int flags);
int test_kvstoreIteratorRemoveAllKeysDeleteEmptyDict(int argc, char **argv, int flags);
int test_kvstoreDictIteratorRemoveAllKeysNoDeleteEmptyDict(int argc, char **argv, int flags);
int test_kvstoreDictIteratorRemoveAllKeysDeleteEmptyDict(int argc, char **argv, int flags);
int test_string2ll(int argc, char **argv, int flags);
int test_string2l(int argc, char **argv, int flags);
int test_ll2string(int argc, char **argv, int flags);
int test_ld2string(int argc, char **argv, int flags);
int test_fixedpoint_d2string(int argc, char **argv, int flags);
int test_reclaimFilePageCache(int argc, char **argv, int flags);

unitTest __test_crc64_c[] = {{"test_crc64", test_crc64}, {NULL, NULL}};
unitTest __test_crc64combine_c[] = {{"test_crc64combine", test_crc64combine}, {NULL, NULL}};
unitTest __test_intset_c[] = {{"test_intsetValueEncodings", test_intsetValueEncodings}, {"test_intsetBasicAdding", test_intsetBasicAdding}, {"test_intsetLargeNumberRandomAdd", test_intsetLargeNumberRandomAdd}, {"test_intsetUpgradeFromint16Toint32", test_intsetUpgradeFromint16Toint32}, {"test_intsetUpgradeFromint16Toint64", test_intsetUpgradeFromint16Toint64}, {"test_intsetUpgradeFromint32Toint64", test_intsetUpgradeFromint32Toint64}, {"test_intsetStressLookups", test_intsetStressLookups}, {"test_intsetStressAddDelete", test_intsetStressAddDelete}, {NULL, NULL}};
unitTest __test_kvstore_c[] = {{"test_kvstoreAdd16Keys", test_kvstoreAdd16Keys}, {"test_kvstoreIteratorRemoveAllKeysNoDeleteEmptyDict", test_kvstoreIteratorRemoveAllKeysNoDeleteEmptyDict}, {"test_kvstoreIteratorRemoveAllKeysDeleteEmptyDict", test_kvstoreIteratorRemoveAllKeysDeleteEmptyDict}, {"test_kvstoreDictIteratorRemoveAllKeysNoDeleteEmptyDict", test_kvstoreDictIteratorRemoveAllKeysNoDeleteEmptyDict}, {"test_kvstoreDictIteratorRemoveAllKeysDeleteEmptyDict", test_kvstoreDictIteratorRemoveAllKeysDeleteEmptyDict}, {NULL, NULL}};
unitTest __test_util_c[] = {{"test_string2ll", test_string2ll}, {"test_string2l", test_string2l}, {"test_ll2string", test_ll2string}, {"test_ld2string", test_ld2string}, {"test_fixedpoint_d2string", test_fixedpoint_d2string}, {"test_reclaimFilePageCache", test_reclaimFilePageCache}, {NULL, NULL}};

struct unitTestSuite {
    char *filename;
    unitTest *tests;
} unitTestSuite[] = {
    {"test_crc64.c", __test_crc64_c},
    {"test_crc64combine.c", __test_crc64combine_c},
    {"test_intset.c", __test_intset_c},
    {"test_kvstore.c", __test_kvstore_c},
    {"test_util.c", __test_util_c},
};
