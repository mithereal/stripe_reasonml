[@bs.module "../node_modules/react-stripe-elements/lib/components/Elements"] external elements: ReasonReact.reactClass = "default";

type action =
 | SUBMITFORM
 | TOKEN(string)

type state =  {
    token: string,
}

let reducer = (action, state) =>
    switch(action) {
     | SUBMITFORM =>  self.send(TOKEN("test"));
                      ReasonReact.NoUpdate
     | TOKEN(x) =>  ReasonReact.Update({...state, token: x})
};

let component = ReasonReact.reducerComponent("CheckoutForm");

let make = _children => {
  ...component,
  initialState: () => { token: "" },
  reducer,
  render: (self) =>
        <form>
          <AddressSection />
          <CardSection />
          <button onClick=((_e) => self.send(SUBMITFORM))>Confirm order</button>
        </form>

};