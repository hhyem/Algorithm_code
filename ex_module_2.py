#예제) 상품을 많이 구입할수록 할인을 많이 받도록 구입 개수에 따라 할인율이 달라지는 모듈

#모듈 파일 (dgGoods.py)
def calcTotalPrice(gps):
	dcRate = 0
    totalPrice = 0
    
    if len(gps) == 1:
    	dcRate = 5
	elif len(gps) == 2:
    	dcRate = 10
    elif len(gps) == 3:
    	dcRate = 20
    elif len(gps) >= 4:
        dcRate = 30
        
    for item in gps:
        totalPrice += item * (1 - dcRate / 100)
        
	return [dcRate, totalPrice]

#실행 파일

import dcGoods as dg

if __name__ == '__main__':
	flag = True
    goodPrices = []
    
    while flag:
        purchase = int(input('상품을 구매하시겠습니까? 1. 구매 2. 종료 '))

		if purchase == 1:
        	price = int(input('구매한 상품 금액 : '))
            goodPrices.append(price)
        elif purchase == 2:
            result = dg.calcTotalPrice(goodPrices)
            flag = False
            
	print('할인율 : ',result[0], '%')
    print('총합계 : ',result[1], '원')
