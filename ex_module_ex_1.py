import convertUnitModule

inputData = int(input('길이(mm)를 입력하세요 .'))

result = convertUnitModule.convertUnit(inputData)
convertUnitModule.printLength(inputData, result)
