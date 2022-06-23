$(document).ready(function(){ 
    var proQty = $('.pro-qty'); // HTML class 이름을 proQty 변수로 저장시킵니다.
    proQty.prepend('<div class="dec qtybtn">-</div>'); // pro-qty 클래스 뒤에 - 버튼 을 출력합니다.
    proQty.append('<div class="inc qtybtn">+</div>'); // pro-qty 클래스 앞에 + 버튼 을 출력합니다.
    proQty.on('click', '.qtybtn', function () { // qtybtn 클래스 가 있는 부분을 클릭했을 때 동작합니다.
        var $button = $(this); // 현재 있는 qtybtn의 속성 을 저장합니다.
        var oldValue = $button.parent().find('input').val(); 
        // qtybtn 의 부모중 input 태그의 value 값을 저장합니다.
        if ($button.hasClass('inc')) { // inc 속성을 가지고 있는 경우
            if(oldValue > 1){ // 2일 경우 더이상 증가하지 않고 리턴합니다.
                return;
            }
            var newVal = parseFloat(oldValue) + 1; // 문자형태인 oldValue를 실수로 변경하고 1을 더한 후 저장합니다.
        } 
        else {
            if (oldValue > 0) { 
                var newVal = parseFloat(oldValue) - 1;
            } 
            else { // 0일 경우 더이상 감소하지 않고 리턴합니다.
                newVal = 0;
            }
        }
        $button.parent().find('input').val(newVal);  
        // input 태그에 newVal값을 저장합니다.
    });
});
