# Stripe For Reasonml

> ReasonMl components for Stripe.js and Stripe Elements

This project is a thin ReasonMl wrapper around
[Stripe.js](https://stripe.com/docs/stripe.js) and
[Stripe Elements](https://stripe.com/docs/elements). It allows you to add
Elements to any ReasonMl app, and manages the state and lifecycle of Elements for
you.

The
[Stripe.js / Stripe Elements API reference](https://stripe.com/docs/elements/reference)
goes into more detail on the various customization options for Elements (e.g.
styles, fonts).

## Getting started

### The Stripe functions

In order for your application to have access to
[the Stripe object](https://stripe.com/docs/elements/reference#the-stripe-object),
 
 
 open StripeElements;
 
place the open function in files you want to add the functionality to, in my case its  Checkout.re 


