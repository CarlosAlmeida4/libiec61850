/*
 * static_model.c
 *
 * automatically generated from sampleModel_with_dataset.icd
 */
#include <stdlib.h>
#include "model.h"

static DataAttribute ld0ln0do0bda0 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln0do0bda1 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute ld0ln0do0bda2 = {"ctlModel", CF, ENUMERATED, 0, NULL, NULL};
static DataAttribute* ld0ln0do0_dataAttributes[] = {&ld0ln0do0bda0, &ld0ln0do0bda1, &ld0ln0do0bda2, NULL};
static DataObject ld0ln0do0 = {"Mod", NULL, ld0ln0do0_dataAttributes}; /* com.libiec61850.scl.model.DataObject@18346a3 */
static DataAttribute ld0ln0do1bda0 = {"stVal", ST, INT32, 0, NULL, NULL};
static DataAttribute ld0ln0do1bda1 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln0do1bda2 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln0do1_dataAttributes[] = {&ld0ln0do1bda0, &ld0ln0do1bda1, &ld0ln0do1bda2, NULL};
static DataObject ld0ln0do1 = {"Beh", NULL, ld0ln0do1_dataAttributes}; /* com.libiec61850.scl.model.DataObject@19299f5 */
static DataAttribute ld0ln0do2bda0 = {"stVal", ST, INT32, 0, NULL, NULL};
static DataAttribute ld0ln0do2bda1 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln0do2bda2 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln0do2_dataAttributes[] = {&ld0ln0do2bda0, &ld0ln0do2bda1, &ld0ln0do2bda2, NULL};
static DataObject ld0ln0do2 = {"Health", NULL, ld0ln0do2_dataAttributes}; /* com.libiec61850.scl.model.DataObject@1b9d4d8 */
static DataAttribute ld0ln0do3bda0 = {"vendor", DC, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute ld0ln0do3bda1 = {"swRev", DC, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute ld0ln0do3bda2 = {"d", DC, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute ld0ln0do3bda3 = {"configRev", DC, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute ld0ln0do3bda4 = {"ldNs", EX, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute* ld0ln0do3_dataAttributes[] = {&ld0ln0do3bda0, &ld0ln0do3bda1, &ld0ln0do3bda2, &ld0ln0do3bda3, &ld0ln0do3bda4, NULL};
static DataObject ld0ln0do3 = {"NamPlt", NULL, ld0ln0do3_dataAttributes}; /* com.libiec61850.scl.model.DataObject@144b9ff */
static DataObject* ld0ln0_dataObjects[] = {&ld0ln0do0, &ld0ln0do1, &ld0ln0do2, &ld0ln0do3, NULL};
//   FCDA: SampleIEDDevice1/LLN0.Mod.q
FunctionalConstrainedData ld0ln0_dataset0_fcda0 = {"SampleIEDDevice1/LLN0.Mod.q", ST};
//   FCDA: SampleIEDDevice1/MMXU1.Mod.q
FunctionalConstrainedData ld0ln0_dataset0_fcda1 = {"SampleIEDDevice1/MMXU1.Mod.q", ST};
//   FCDA: SampleIEDDevice1/MMXU1.Mod.ctlModel
FunctionalConstrainedData ld0ln0_dataset0_fcda2 = {"SampleIEDDevice1/MMXU1.Mod.ctlModel", CF};
static FunctionalConstrainedData* ld0ln0_dataset0_fcdas[] = {&ld0ln0_dataset0_fcda0, &ld0ln0_dataset0_fcda1, &ld0ln0_dataset0_fcda2, NULL};
static DataSet ld0ln0_dataset0 = {"dataset1", ld0ln0_dataset0_fcdas};
static DataSet* ld0ln0_dataSets[] = {&ld0ln0_dataset0, NULL};
static LogicalNode ld0ln0 = {"LLN0", ld0ln0_dataObjects, ld0ln0_dataSets};
static DataAttribute ld0ln1do0bda0 = {"vendor", DC, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute* ld0ln1do0_dataAttributes[] = {&ld0ln1do0bda0, NULL};
static DataObject ld0ln1do0 = {"PhyNam", NULL, ld0ln1do0_dataAttributes}; /* com.libiec61850.scl.model.DataObject@10f34cc */
static DataAttribute ld0ln1do1bda0 = {"stVal", ST, INT32, 0, NULL, NULL};
static DataAttribute ld0ln1do1bda1 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln1do1bda2 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln1do1_dataAttributes[] = {&ld0ln1do1bda0, &ld0ln1do1bda1, &ld0ln1do1bda2, NULL};
static DataObject ld0ln1do1 = {"PhyHealth", NULL, ld0ln1do1_dataAttributes}; /* com.libiec61850.scl.model.DataObject@1535a58 */
static DataAttribute ld0ln1do2bda0 = {"stVal", ST, BOOLEAN, 0, NULL, NULL};
static DataAttribute ld0ln1do2bda1 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln1do2bda2 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln1do2_dataAttributes[] = {&ld0ln1do2bda0, &ld0ln1do2bda1, &ld0ln1do2bda2, NULL};
static DataObject ld0ln1do2 = {"Proxy", NULL, ld0ln1do2_dataAttributes}; /* com.libiec61850.scl.model.DataObject@1505258 */
static DataObject* ld0ln1_dataObjects[] = {&ld0ln1do0, &ld0ln1do1, &ld0ln1do2, NULL};
static LogicalNode ld0ln1 = {"LPHD1", ld0ln1_dataObjects, NULL};
static DataAttribute ld0ln2do0bda0 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln2do0bda1 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute ld0ln2do0bda2 = {"ctlModel", CF, ENUMERATED, 0, NULL, NULL};
static DataAttribute* ld0ln2do0_dataAttributes[] = {&ld0ln2do0bda0, &ld0ln2do0bda1, &ld0ln2do0bda2, NULL};
static DataObject ld0ln2do0 = {"Mod", NULL, ld0ln2do0_dataAttributes}; /* com.libiec61850.scl.model.DataObject@4e194f */
static DataAttribute ld0ln2do1bda0 = {"stVal", ST, INT32, 0, NULL, NULL};
static DataAttribute ld0ln2do1bda1 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln2do1bda2 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln2do1_dataAttributes[] = {&ld0ln2do1bda0, &ld0ln2do1bda1, &ld0ln2do1bda2, NULL};
static DataObject ld0ln2do1 = {"Beh", NULL, ld0ln2do1_dataAttributes}; /* com.libiec61850.scl.model.DataObject@15fd251 */
static DataAttribute ld0ln2do2bda0 = {"stVal", ST, INT32, 0, NULL, NULL};
static DataAttribute ld0ln2do2bda1 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln2do2bda2 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln2do2_dataAttributes[] = {&ld0ln2do2bda0, &ld0ln2do2bda1, &ld0ln2do2bda2, NULL};
static DataObject ld0ln2do2 = {"Health", NULL, ld0ln2do2_dataAttributes}; /* com.libiec61850.scl.model.DataObject@1e8e144 */
static DataAttribute ld0ln2do3bda0 = {"vendor", DC, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute ld0ln2do3bda1 = {"swRev", DC, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute ld0ln2do3bda2 = {"d", DC, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute* ld0ln2do3_dataAttributes[] = {&ld0ln2do3bda0, &ld0ln2do3bda1, &ld0ln2do3bda2, NULL};
static DataObject ld0ln2do3 = {"NamPlt", NULL, ld0ln2do3_dataAttributes}; /* com.libiec61850.scl.model.DataObject@1d592a */
static DataAttribute ld0ln2do4bda0 = {"stVal", ST, INT32, 0, NULL, NULL};
static DataAttribute ld0ln2do4bda1 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln2do4bda2 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln2do4_dataAttributes[] = {&ld0ln2do4bda0, &ld0ln2do4bda1, &ld0ln2do4bda2, NULL};
static DataObject ld0ln2do4 = {"OpTmh", NULL, ld0ln2do4_dataAttributes}; /* com.libiec61850.scl.model.DataObject@c8e4de */
static DataAttribute ld0ln2do5bda0 = {"stVal", ST, INT32, 0, NULL, NULL};
static DataAttribute ld0ln2do5bda1 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln2do5bda2 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln2do5_dataAttributes[] = {&ld0ln2do5bda0, &ld0ln2do5bda1, &ld0ln2do5bda2, NULL};
static DataObject ld0ln2do5 = {"GnOpSt", NULL, ld0ln2do5_dataAttributes}; /* com.libiec61850.scl.model.DataObject@129df8a */
static DataAttribute ld0ln2do6bda0 = {"stVal", ST, INT32, 0, NULL, NULL};
static DataAttribute ld0ln2do6bda1 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln2do6bda2 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln2do6_dataAttributes[] = {&ld0ln2do6bda0, &ld0ln2do6bda1, &ld0ln2do6bda2, NULL};
static DataObject ld0ln2do6 = {"OpTmsRs", NULL, ld0ln2do6_dataAttributes}; /* com.libiec61850.scl.model.DataObject@12e4cd */
static DataAttribute ld0ln2do7cda0bda0 = {"f", MX, FLOAT32, 0, NULL, NULL};
static DataAttribute* ld0ln2do7cda0_subDataAttributes[] = {&ld0ln2do7cda0bda0, NULL};
static DataAttribute ld0ln2do7cda0 = {"mag", MX, CONSTRUCTED, 0, ld0ln2do7cda0_subDataAttributes, NULL};
static DataAttribute ld0ln2do7bda1 = {"q", MX, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln2do7bda2 = {"t", MX, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln2do7_dataAttributes[] = {&ld0ln2do7cda0, &ld0ln2do7bda1, &ld0ln2do7bda2, NULL};
static DataObject ld0ln2do7 = {"TotWh", NULL, ld0ln2do7_dataAttributes}; /* com.libiec61850.scl.model.DataObject@6b51d8 */
static DataObject* ld0ln2_dataObjects[] = {&ld0ln2do0, &ld0ln2do1, &ld0ln2do2, &ld0ln2do3, &ld0ln2do4, &ld0ln2do5, &ld0ln2do6, &ld0ln2do7, NULL};
static LogicalNode ld0ln2 = {"DGEN1", ld0ln2_dataObjects, NULL};
static DataAttribute ld0ln3do0bda0 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln3do0bda1 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute ld0ln3do0bda2 = {"ctlModel", CF, ENUMERATED, 0, NULL, NULL};
static DataAttribute* ld0ln3do0_dataAttributes[] = {&ld0ln3do0bda0, &ld0ln3do0bda1, &ld0ln3do0bda2, NULL};
static DataObject ld0ln3do0 = {"Mod", NULL, ld0ln3do0_dataAttributes}; /* com.libiec61850.scl.model.DataObject@1ca5df9 */
static DataAttribute ld0ln3do1bda0 = {"stVal", ST, INT32, 0, NULL, NULL};
static DataAttribute ld0ln3do1bda1 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln3do1bda2 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln3do1_dataAttributes[] = {&ld0ln3do1bda0, &ld0ln3do1bda1, &ld0ln3do1bda2, NULL};
static DataObject ld0ln3do1 = {"Beh", NULL, ld0ln3do1_dataAttributes}; /* com.libiec61850.scl.model.DataObject@df9095 */
static DataAttribute ld0ln3do2bda0 = {"stVal", ST, INT32, 0, NULL, NULL};
static DataAttribute ld0ln3do2bda1 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln3do2bda2 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln3do2_dataAttributes[] = {&ld0ln3do2bda0, &ld0ln3do2bda1, &ld0ln3do2bda2, NULL};
static DataObject ld0ln3do2 = {"Health", NULL, ld0ln3do2_dataAttributes}; /* com.libiec61850.scl.model.DataObject@18d4c9a */
static DataAttribute ld0ln3do3bda0 = {"vendor", DC, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute ld0ln3do3bda1 = {"swRev", DC, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute ld0ln3do3bda2 = {"d", DC, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute* ld0ln3do3_dataAttributes[] = {&ld0ln3do3bda0, &ld0ln3do3bda1, &ld0ln3do3bda2, NULL};
static DataObject ld0ln3do3 = {"NamPlt", NULL, ld0ln3do3_dataAttributes}; /* com.libiec61850.scl.model.DataObject@1a02097 */
static DataAttribute ld0ln3do4bda0 = {"stVal", ST, INT32, 0, NULL, NULL};
static DataAttribute ld0ln3do4bda1 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln3do4bda2 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln3do4_dataAttributes[] = {&ld0ln3do4bda0, &ld0ln3do4bda1, &ld0ln3do4bda2, NULL};
static DataObject ld0ln3do4 = {"SchdSt", NULL, ld0ln3do4_dataAttributes}; /* com.libiec61850.scl.model.DataObject@1bbc779 */
/* WARNING - data object SchdId has no children! */
/* WARNING - data object SchdCat has no children! */
/* WARNING - data object SchdTyp has no children! */
static DataAttribute ld0ln3do5bda0 = {"val", SP, FLOAT32, 255, NULL, NULL};
static DataAttribute ld0ln3do5bda1 = {"time", SP, TIMESTAMP, 255, NULL, NULL};
static DataAttribute* ld0ln3do5_dataAttributes[] = {&ld0ln3do5bda0, &ld0ln3do5bda1, NULL};
static DataObject ld0ln3do5 = {"SchdAbsTm", NULL, ld0ln3do5_dataAttributes}; /* com.libiec61850.scl.model.DataObject@124e935 */
static DataObject* ld0ln3_dataObjects[] = {&ld0ln3do0, &ld0ln3do1, &ld0ln3do2, &ld0ln3do3, &ld0ln3do4, &ld0ln3do5, NULL};
static LogicalNode ld0ln3 = {"DSCH1", ld0ln3_dataObjects, NULL};
static DataAttribute ld0ln4do0bda0 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln4do0bda1 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute ld0ln4do0bda2 = {"ctlModel", CF, ENUMERATED, 0, NULL, NULL};
static DataAttribute* ld0ln4do0_dataAttributes[] = {&ld0ln4do0bda0, &ld0ln4do0bda1, &ld0ln4do0bda2, NULL};
static DataObject ld0ln4do0 = {"Mod", NULL, ld0ln4do0_dataAttributes}; /* com.libiec61850.scl.model.DataObject@4ac866 */
static DataAttribute ld0ln4do1bda0 = {"stVal", ST, INT32, 0, NULL, NULL};
static DataAttribute ld0ln4do1bda1 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln4do1bda2 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln4do1_dataAttributes[] = {&ld0ln4do1bda0, &ld0ln4do1bda1, &ld0ln4do1bda2, NULL};
static DataObject ld0ln4do1 = {"Beh", NULL, ld0ln4do1_dataAttributes}; /* com.libiec61850.scl.model.DataObject@1aac07d */
static DataAttribute ld0ln4do2bda0 = {"stVal", ST, INT32, 0, NULL, NULL};
static DataAttribute ld0ln4do2bda1 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln4do2bda2 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln4do2_dataAttributes[] = {&ld0ln4do2bda0, &ld0ln4do2bda1, &ld0ln4do2bda2, NULL};
static DataObject ld0ln4do2 = {"Health", NULL, ld0ln4do2_dataAttributes}; /* com.libiec61850.scl.model.DataObject@1435ec9 */
static DataAttribute ld0ln4do3bda0 = {"vendor", DC, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute ld0ln4do3bda1 = {"swRev", DC, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute ld0ln4do3bda2 = {"d", DC, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute* ld0ln4do3_dataAttributes[] = {&ld0ln4do3bda0, &ld0ln4do3bda1, &ld0ln4do3bda2, NULL};
static DataObject ld0ln4do3 = {"NamPlt", NULL, ld0ln4do3_dataAttributes}; /* com.libiec61850.scl.model.DataObject@3dfcb */
static DataObject* ld0ln4_dataObjects[] = {&ld0ln4do0, &ld0ln4do1, &ld0ln4do2, &ld0ln4do3, NULL};
static LogicalNode ld0ln4 = {"MMXU1", ld0ln4_dataObjects, NULL};
static DataAttribute ld0ln5do0bda0 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln5do0bda1 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute ld0ln5do0bda2 = {"ctlModel", CF, ENUMERATED, 0, NULL, NULL};
static DataAttribute* ld0ln5do0_dataAttributes[] = {&ld0ln5do0bda0, &ld0ln5do0bda1, &ld0ln5do0bda2, NULL};
static DataObject ld0ln5do0 = {"Mod", NULL, ld0ln5do0_dataAttributes}; /* com.libiec61850.scl.model.DataObject@59a735 */
static DataAttribute ld0ln5do1bda0 = {"stVal", ST, INT32, 0, NULL, NULL};
static DataAttribute ld0ln5do1bda1 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln5do1bda2 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln5do1_dataAttributes[] = {&ld0ln5do1bda0, &ld0ln5do1bda1, &ld0ln5do1bda2, NULL};
static DataObject ld0ln5do1 = {"Beh", NULL, ld0ln5do1_dataAttributes}; /* com.libiec61850.scl.model.DataObject@1f09a31 */
static DataAttribute ld0ln5do2bda0 = {"stVal", ST, INT32, 0, NULL, NULL};
static DataAttribute ld0ln5do2bda1 = {"q", ST, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln5do2bda2 = {"t", ST, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln5do2_dataAttributes[] = {&ld0ln5do2bda0, &ld0ln5do2bda1, &ld0ln5do2bda2, NULL};
static DataObject ld0ln5do2 = {"Health", NULL, ld0ln5do2_dataAttributes}; /* com.libiec61850.scl.model.DataObject@11b1d80 */
static DataAttribute ld0ln5do3bda0 = {"vendor", DC, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute ld0ln5do3bda1 = {"swRev", DC, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute ld0ln5do3bda2 = {"d", DC, VISIBLE_STRING_255, 0, NULL, NULL};
static DataAttribute* ld0ln5do3_dataAttributes[] = {&ld0ln5do3bda0, &ld0ln5do3bda1, &ld0ln5do3bda2, NULL};
static DataObject ld0ln5do3 = {"NamPlt", NULL, ld0ln5do3_dataAttributes}; /* com.libiec61850.scl.model.DataObject@12ddfe4 */
static DataAttribute ld0ln5do4cda0bda0 = {"f", MX, FLOAT32, 0, NULL, NULL};
static DataAttribute* ld0ln5do4cda0_subDataAttributes[] = {&ld0ln5do4cda0bda0, NULL};
static DataAttribute ld0ln5do4cda0 = {"mag", MX, CONSTRUCTED, 0, ld0ln5do4cda0_subDataAttributes, NULL};
static DataAttribute ld0ln5do4bda1 = {"q", MX, QUALITY, 0, NULL, NULL};
static DataAttribute ld0ln5do4bda2 = {"t", MX, TIMESTAMP, 0, NULL, NULL};
static DataAttribute* ld0ln5do4_dataAttributes[] = {&ld0ln5do4cda0, &ld0ln5do4bda1, &ld0ln5do4bda2, NULL};
static DataObject ld0ln5do4 = {"TotW", NULL, ld0ln5do4_dataAttributes}; /* com.libiec61850.scl.model.DataObject@c62080 */
static DataObject* ld0ln5_dataObjects[] = {&ld0ln5do0, &ld0ln5do1, &ld0ln5do2, &ld0ln5do3, &ld0ln5do4, NULL};
static LogicalNode ld0ln5 = {"MMXU2", ld0ln5_dataObjects, NULL};
static LogicalNode* ld0_lnodes[] = {&ld0ln0, &ld0ln1, &ld0ln2, &ld0ln3, &ld0ln4, &ld0ln5, NULL};
static LogicalDevice ld0 = {"SampleIEDDevice1", ld0_lnodes};
static LogicalDevice* logicalDevices[] = {&ld0, NULL};

IedModel staticIedModel = {"accessPoint1", logicalDevices};
