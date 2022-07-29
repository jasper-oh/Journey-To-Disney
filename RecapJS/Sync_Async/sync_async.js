function echo(str){
  console.log(str)
}
 /*
 이렇게, 순서대로 실행되는 것을 동기, 즉 sync 라고 한다.
 */
echo("buying ramen")
echo("prepare pan")
echo("pour water in pan")
echo("boiling")
echo("put a instance soup")
echo("eat")
echo("=======================")
/*
 반면에, 이렇게 setTimeout 이라는 함수를 이용해서 함수 호출의 순서를
 임의로 변경 해준것을 async 라고 한다.
 이를테면, 인터넷 통신에서 응답을 어떻게 받을지 모르는 것 처럼, 비동기는 널리 사용되고 있다.
 하지만, 순서가 맞지 않아 사용이 불가능하다.
*/

function echo_1(str){
  setTimeout(
    managing_time => {
      console.log(str)
    },1000 * Math.random())
}

echo_1("buying ramen")
echo_1("prepare pan")
echo_1("pour water in pan")
echo_1("boiling")
echo_1("put a instance soup")
echo_1("eat")
echo_1("=======================")

/*
위의 단점을 보완하기 위해서 callback() 함수를 사용해서
비동기로 만드는것이 전통적인 방법이다.
하지만, Sync 코드와는 다르게 보기가 힘들다는 단점을 가지고 있다.
이런 단점을 보완하고자 다음 방법이 생겨났다!
*/

function echo_2(str, callback){
  setTimeout(function(){
    console.log(str)
    callback()
  },1000 * Math.random())
}

  echo_2("buying ramen" , function(){
    echo_2("prepare pan",function(){
      echo_2("pour water in pan",function(){
        echo_2("boiling",function(){
          echo_2("put a instance soup",function(){
            echo_2("eat",function(){

            })
          })
        })
      })
    })
  })

  /*
    await 함수를 사용하는 방법이 존재하는데, await 는
    이런방식으로 사용하지 않는다. 아래의 방식으로 await 을
    사용하게 된다면, 에러 나온다..
    */

  function echo_3(str){
    setTimeout(function(){
      console.log(str)

    },1000 * Math.random())
  }

  await echo_3("buying ramen")
  await echo_3("prepare pan")
  await echo_3("pour water in pan")
  await echo_3("boiling")
  await echo_3("put a instance soup")
  await echo_3("eat")


/*
 이렇게 고치게 된다면 에러없이
 실행이 되기는 하지만, 순서는 뒤죽 박죽으로 나온다.
 즉, 비동기적인 프로그램을 동기적으로 변경할 수 가 없다는 의미
*/

function echo_4(str){
  setTimeout(function(){
    console.log(str)
  },1000 * Math.random())
}

async function ehchoFunction(){
  await echo_4("buying ramen")
  await echo_4("prepare pan")
  await echo_4("pour water in pan")
  await echo_4("boiling")
  await echo_4("put a instance soup")
  await echo_4("eat")
}

/*
그렇기 때문에 사용하게 되는 객체가 new Promise() 이다.

이렇게 비동기적으로 작동하는 코드를
*/

function echo_4(str){
  return new Promise(function(resolve, reject){
    setTimeout(function(){

      console.log(str)
      resolve()
    },1000 * Math.random())
  })
}

async function echoFunction(){
  await echo_4("buying ramen")
  await echo_4("prepare pan")
  await echo_4("pour water in pan")
  await echo_4("boiling")
  await echo_4("put a instance soup")
  await echo_4("eat")
}

echoFunction()
