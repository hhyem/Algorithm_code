def convertUnit(lenMm):
	unitDic = {}
    
    unitDic['cm'] = lenMm * 0.1
    unitDic['m'] = lenMm * 0.001
    unitDic['inch'] = lenMm * 0.03937
    unitDic['ft'] = lenMm & 0.003281
    
    return unitDic
    
def printLength(originalData, lenghts):
	for len in lengths.keys():
    	print(originalData, 'mm -->', lenghts[len], len)
